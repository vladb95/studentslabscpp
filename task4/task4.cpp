#include <iostream>
#include <fstream>
#include <sstream>
#include <string.h>
#include <string>
#include <vector>
#include <algorithm>
#include <typeinfo>
using namespace std;

inline std::string &rtrim(std::string &s) {
        s.erase(std::find_if(s.rbegin(), s.rend(), std::not1(std::ptr_fun<int, int>(std::isspace))).base(), s.end());
        return s;
}

vector<string> split(string str, char delimiter) {
  vector<string> internal;
  stringstream ss(str); // Turn the string into a stream.
  string tok;
  
  while(getline(ss, tok, delimiter)) {
    internal.push_back(tok);
  }
  
  return internal;
}

string readfile(string fileName){
	  string line, result;
	  ifstream myfile (fileName.c_str()); 
	  int i = 0;
	  if (myfile.is_open())
	  {
	    while ( getline (myfile,line) )
	    {
	      if(line != "Segmentation fault"){
	      	result += line + "\n";
	      }else{
	      	cout << line;
	      }
	    }
	    myfile.close();
	  }
	  return rtrim(result);
}

void writefile(string fileName, string dataToWrite){
	ofstream myfile;
  	myfile.open (fileName.c_str());
  	myfile << dataToWrite.c_str();
  	myfile.close();
}

int menu(){
	cout << "1 - Count of words and them length\n\
	11 - Count of words and them length (bycicle)\n\
2 - All words begining from vowel\n\
3 - Delete word before the longest word in text\n\
4 - Create a gistogramm of word length\n\
5 - Reverse all words\n\
6 - Delete word with maximum number of occurrences\n\
7 - Delete words with length\n\
8 - Delete words with the right combination of letters\n\
Some else - Exit\n\
Choose item: ";
	int answer = 0;
	cin >> answer;
	return answer;
}

void countWords(string paramString){
	vector<string> temp = split(paramString, ' ');
	
	int s = temp.size();
	ofstream myfile;
	myfile.open ("res.txt");
	myfile << s << " words in string";
	for(int i = 0;i < temp.size(); i++){
		if(temp[i].size()>0){
			myfile << "\n" << temp[i].size() <<  " length of " + temp[i];
		}
	}
  	myfile.close();
}

void countWordsBycicle(string param){
	ofstream myfile;
	myfile.open ("res.txt");
	int words = 0, temp = 0;
	string tempword;
	for(int i = 0; i < param.size(); i++){
		if(param[i] == ' '){
			if(temp > 0){
				myfile << temp << " length of " << tempword << "\n";
				temp = 0;
				words++;
				tempword = "";
			}else{
				temp = 0;
			}
		} else {
			tempword += param[i];
			temp++;
		}
	}
	myfile << words << " words in string";
	myfile.close();
}

void vowel(string paramString){
	string result;
	vector<string> temp = split(paramString, ' ');
	char vowel[12] = {'a', 'e', 'i', 'o', 'u', 'y'};
	int s = temp.size();
	ofstream myfile;
	myfile.open ("res.txt");
	/*for(int i = 0;i < temp.size(); i++){
		if(substr(temp[i])){
			myfile << temp[i];
		}
	}*/
  	myfile.close();
}

void bootstraper(int menu, string param){
	switch(menu){
		case 1: 
			 countWords(param);
		break;
		case 11: 
			 countWordsBycicle(param);
		break;
		case 2: 
			 vowel(param);
		break;
		case 3: break;
		case 4: break;
		case 5: break;
		case 6: break;
	}
}

int main(){
	string res = readfile("info.txt");
	bootstraper(menu(), res);
}