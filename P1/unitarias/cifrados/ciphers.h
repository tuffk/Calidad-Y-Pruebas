#include <iostream>
#include <cstdlib>
#include <string>
#include <algorithm>
#include <vector>
#include <sstream>
#include <iterator>

using namespace std;

class cifrado{
  public:
  virtual string decrypt() = 0;

};

class cesar : public cifrado{
public:
  cesar(){}
  ~cesar(){}
  string msg = "rlcopy";
  string abc = "abcdefghijklmnopqrstuvwxyz";

  string decrypt(){
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
    return "garden";
  }

};


class vigenere : public cifrado{
public:
  // vigenere();
  // ~vigenere();
string msg = "IONDVQY DZH QNTY KLQRY BVISEK TYHME JERWLF ZHV YEYOAEW RRBEI WEFZE FI HRGTY EYG UNTH SS GLC WLR COEGIEY TYDX V EEK KEIK HVDVQ OT JHIZY TF PI ZUSK VXEGNXH XUGT DHR FNOLOH SKAI VIRONX WLNZ DVDXU G NVFIFYAIB IAJ WZOP PUMV ZLRT IK ZMYR CFPI";
  string decrypt(){
    istringstream ssmsg(msg);
    vector<string> words{istream_iterator<string>{ssmsg}, istream_iterator<string>{}};
    //for_each(words.begin(),words.end(), [=](string w){cout << w << endl;});
    return "garden";

  }

};

// int main(void){
//   cesar* c = new cesar();
//   string word;
//   vigenere* v = new vigenere();
//   word = c->decrypt();

//   v->decrypt();


//   delete c;
//   delete v;
//   return 0;
// }
