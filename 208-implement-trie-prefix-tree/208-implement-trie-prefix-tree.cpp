class node{
    public:
    bool isWord;
    unordered_map<char,node*> next;    
};
class Trie {
public:
    node *trie=NULL;

    Trie() {
        trie = new node();
    }
    
    void insert(string word) {
        auto it= trie;
        for(auto itt:word){
            if(!it->next[itt]){
                it->next[itt] = new node();
            }
            it=it->next[itt];            
        }
        it->isWord =1;
    }
    
    bool search(string word) {
        auto it=trie;
        for(auto itt:word){
            if(!it->next[itt]){
                return false;
            }
            it=it->next[itt];            
        }
        return it->isWord==1;
    }
    
    bool startsWith(string prefix) {
        auto it= trie;
        for(auto itt:prefix){
            if(!it->next[itt]){
                return false;
            }
            it=it->next[itt];            
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */