class MyHashMap {
public:
        vector<vector<int>> HashMap;
    
    void put(int key, int value) {
        bool present=false;
        for(int i=0;i<HashMap.size();i++){
            if(HashMap[i][0]==key){
                HashMap[i][1]=value;
                present=true;
            break;
            }
        }
        if(present==false){
            vector<int> ne(2, 0);
            ne[0]=key;
            ne[1]=value;
            HashMap.push_back(ne);
        }
    }
    
    int get(int key) {
        int out=-1;
        for(int i=0;i<HashMap.size();i++){
            if(HashMap[i][0]==key){
                out= HashMap[i][1];
            }
        }
       return out;
    }
    
    void remove(int key) {
        for(int i=0;i<HashMap.size();i++){
            if(HashMap[i][0]==key){
                 HashMap.erase(HashMap.begin()+i);
            }
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */