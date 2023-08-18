#include <bits/stdc++.h> 
using namespace std;

// Trie 
const int ALPHABET_SIZE = 26;
int times, q, r;
string name;

// trie node
struct TrieNode
{
    struct TrieNode *children[ALPHABET_SIZE];
 
    // isEndOfWord is true if the node represents
    // end of a word
    bool isEndOfWord;
};
 
// Returns new trie node (initialized to NULLs)
struct TrieNode *getNode(void)
{
    struct TrieNode *pNode =  new TrieNode;
 
    pNode->isEndOfWord = false;
 
    for (int i = 0; i < ALPHABET_SIZE; i++)
        pNode->children[i] = NULL;
 
    return pNode;
}
 
// If not present, inserts key into trie
// If the key is prefix of trie node, just
// marks leaf node
void insert(struct TrieNode *root, string key)
{
    struct TrieNode *pCrawl = root;
 
    for (int i = 0; i < key.length(); i++)
    {
        int index = key[i] - 'a';
        if (!pCrawl->children[index])
            pCrawl->children[index] = getNode();
 
        pCrawl = pCrawl->children[index];
    }
 
    // mark last node as leaf
    pCrawl->isEndOfWord = true;
}
 
// Returns true if key presents in trie, else
// false
bool search(struct TrieNode *root, string key)
{
    struct TrieNode *pCrawl = root;
 
    for (int i = 0; i < key.length(); i++)
    {
        int index = key[i] - 'a';
        if (!pCrawl->children[index])
            return false;
 
        pCrawl = pCrawl->children[index];
    }
 
    return (pCrawl->isEndOfWord);
}
 
// Driver
int main()
{
    r = 1; // 1 derecho, -1 revez
    struct TrieNode *der = getNode();
    struct TrieNode *rev = getNode();

    cin >> times;
    while (times--)
    {
        cin >> q;

        if( q == 1){cin >> name; insert(der,name);} // falta agregar rev palabra alrrevez
        if (q ==3){r*=-1;} 


 
}

int main(){
    int n;
    cin >> n;
    vector <string> palomas;
    int p = 0;
    int status = 1;
    int q;
    string name;
    for (int i = 0; i < n; i++){
        cin >> q;
        if (q != 3){cin >> name;}
        if (q == 1){
            palomas.push_back(name);
            p += 1;
        } else if (q == 2){
            int res = 0;
            if (status == 1){
                for (int f = 0; f < p; f++){
                    if (palomas[f].length() >= name.length() && name == palomas[f].substr(0,name.length())){
                        res = 1;
                    }
                }
            } else {
                reverse(name.begin(), name.end());
                for (int f = 0; f < p; f++){
                    if (palomas[f].length() >= name.length() && name == palomas[f].substr(palomas[f].length() - name.length(),name.length())){
                        res = 1;
                    }
                }
            }
            cout << res << '\n';
        } else {
            status *= -1;
        }
    }
    return 0;
}