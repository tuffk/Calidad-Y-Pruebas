#include <iostream>
#include <cstdlib>
#include <string>
#include <algorithm>

using namespace std;

class cesar {
public:
  cesar(){}
  ~cesar(){}
  string msg = "rlcopy";
  string abc = "abcdefghijklmnopqrstuvwxyz";

  void decrypt(){
    string res ="";
    int pos=0;
    for (int i = 1; i <= 26; i++){
      res = "";
      for_each(msg.begin(),msg.end(),[&](char m){
        pos = abc.find(m);
        res += abc[((pos+i) % 26)];
      });
      cout << "despl: " << i << " output: " << res << endl;
    }

  }

};


class vineger;

int main(void){
  cesar* c = new cesar();
  c->decrypt();



  delete c;
  return 0;
}
