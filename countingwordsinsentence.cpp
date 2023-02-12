#include <iostream>
using namespace std;

int main()
{
   string sentence;
   int countSentence=0;
   int countWord=0;
   int countQuestions=0;
   int countPuctuation=0;
   int countParagraph=0;
   int countLetters=0;
   
  string puncutaions="!,;.-?\'\"";
  int puncutaionLength=puncutaions.length();//stores the length of the string
  std::cout << "Enter sentence" << std::endl;
  getline(cin,sentence);
  int sentenceLength=sentence.length();
  for(int i=0;i<sentenceLength;i++){
      for(int j=0;j<puncutaionLength;j++){//for counting puncutaions
          if(sentence[i]==puncutaions[j]){
			countPuctuation++;
			}
} 
      if(sentence[i]==' '){
          countWord++;
      }
      else if(sentence[i]=='?'){
          countQuestions++;
      }
      else if (sentence[i]=='.'){
          countParagraph++;
      }
      else if(sentence[i]!=' '){
          countLetters++;
      }
      // count the number of letters
  }
  std::cout << "number of letters=" <<countLetters<< std::endl;
  std:: cout<<"number of words="<<countWord+1<<std::endl;
  std::cout << "number of Paragraphs=" <<countParagraph<< std::endl;
  std::cout << "number of puncutaions=" <<countPuctuation<< std::endl;
  std::cout << "number of Questions=" <<countQuestions<< std::endl;
	return 0;
}


