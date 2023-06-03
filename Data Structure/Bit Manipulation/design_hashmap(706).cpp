#include<bits/stdc++.h>
#include<iostream>
#include <map>
class MyHashMap {
public:
    map<int,int> q;
    MyHashMap() {
        
    }
    
    void put(int key, int value) {
        q[key]=value;
    }
    
    int get(int key) {
        if(q.count(key)==1)
            return q[key];
        else
            return -1;
        
    }
    
    void remove(int key) {
        q.erase(key);
    }
};
