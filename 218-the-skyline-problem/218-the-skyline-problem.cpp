class Solution {
public:
        vector<vector<int>> getSkyline(vector<vector<int>>& buildings) {
        std::vector<std::pair<int, int>> coords;
        for (const auto &b : buildings) {
		    // Building end is processed first if two x-coordinates are a tie.
            coords.push_back({ b[0], -b[2] });
			// And add building start.
            coords.push_back({ b[1], b[2] });
        }
        
		// Sort coordinates so buildings ending are processed before buildings starting left to right.
        std::sort(coords.begin(), coords.end());
		
		// Frequency table for heights.
		// Key: When a height frequency is zero, the height is no longer the tallest current height.
        std::map<int, int> heights;
        
        std::vector<std::vector<int>> xs;
		
		// Zero height is always available.
        heights[0] = 1;
        for (const auto &cur : coords) {            
		    // Building start, encounter new height.
            if (cur.second < 0)
                ++heights[-cur.second];
            else
			// Building end, height no longer available. If no other active buildings have the same height, remove it.
                if (--heights[cur.second] == 0)
                    heights.erase(cur.second);
					
			// Currently at building start/end x, height is the largest available height.
            int x = cur.first, y = heights.rbegin()->first;
            if (xs.size()) {
                int prev_x = xs.back()[0], prev_y = xs.back()[1];
				
				// If the previous recorded height is the same as the current height, skip inserting duplicate points.
                if (prev_y == y)
                    continue;
                
				// If the previous point is the same one, disregard the previous and replace it with the latest max height for this x coordinate.
                if (prev_x == x)
                    xs.pop_back();
            }

            xs.push_back({ x, y });
        }
        
        return xs;
    }
};