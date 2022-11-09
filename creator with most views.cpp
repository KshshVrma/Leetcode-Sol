 static bool f(pair<string,int>&a,pair<string,int>&b){
        return a.second>b.second;
    }
    static bool y(pair<string,string>&a,pair<string,string>&b){
        return a.first<b.first;
    }
    vector<vector<string>> mostPopularCreator(vector<string>& creators, vector<string>& ids, vector<int>& views) {
        vector<vector<string>>ans;
        pair<string,int>p;
        unordered_map<string,pair<string,int>>tp;
        
        for(int i=0;i<creators.size();i++){
            auto it=tp.find(creators[i]);
            if(it==tp.end()){
                tp[creators[i]]={ids[i],views[i]};
            }
            else{
                int q=views[i];
                if(q>tp[creators[i]].second){
                    tp[creators[i]]={ids[i],i};
                }
            }
            
        }
        unordered_map<string,int>mp;
        for(int i=0;i<creators.size();i++){
            auto it=mp.find(creators[i]);
            if(it==mp.end()){
                mp[creators[i]]=views[i];
            }
            else{
                mp[creators[i]]+=views[i];
            }
        }
        vector<pair<string,int>>vec;
        for(auto it:mp){
            string t=it.first;
            int r=it.second;
            vec.push_back({t,r});
        }
        sort(vec.begin(),vec.end(),f);
        int i=0;
        vector<pair<string,string>>ptr;
        
        while(vec[i].second==vec[0].second){
            
            string t=vec[i].first;
            vector<string>temp;
            temp.push_back(t);
            temp.push_back(tp[t].first);
            string two=tp[t].first;
            ptr.push_back({t,two});
            ans.push_back(temp);
            i++;
        }
        sort(ptr.begin(),ptr.end(),y);
        vector<vector<string>>fin;
        for(int i=0;i<ptr.size();i++){
    vector<string>a;
            a.push_back(ptr.first);
            a.push_back(ptr.second);
            fin.push_back(a);
        }
        return fin;
        
        
    }
