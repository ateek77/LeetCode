class Node{
    public:
    bool isWord;
    Node* next[26];
};
class WordDictionary {
public:
    Node *trie;
    WordDictionary() {
        trie = new Node();
    }
    
    void addWord(string word) {
        auto node_ptr = trie;
        for(auto _char:word){
            if(node_ptr->next[_char-'a']==NULL){
                node_ptr->next[_char-'a'] = new Node();
            }
            node_ptr =  node_ptr->next[_char-'a'];            
        }
        node_ptr->isWord = 1;
    }
    bool find(Node * node,string &word,int pos){
        if(!node)   return 0;
        if(pos==word.size())
            return node->isWord;
        if(word[pos]!='.'){
            return find(node->next[word[pos]-'a'],word,pos+1);
        }else{
            for(int i=0;i<26;++i){
                if(find(node->next[i],word,pos+1))
                    return true;
            }
        }
        return false;        
    }
    
    bool search(string word) {
        return find(trie,word,0);
//         for(auto _char:word){
//             if(_char=='.'){
                
//             }
//             else if(node_ptr->next[_char-'a']==NULL){
//                 return false;
//             }
//             node_ptr =  node_ptr->next[_char-'a'];            
//         }
        
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */