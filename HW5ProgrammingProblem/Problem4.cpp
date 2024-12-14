// Problem4.cpp
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

// read from file and sort into vector
vector<string> FiletoVec(string filename)
{
    ifstream file(filename);
    vector<string> words;
    string word;
    while (getline(file, word))
      {
        words.push_back(word);
      }
    file.close();

    // sorting
    for (size_t i = 0; i < words.size(); ++i)
      {
        for (size_t j = 0; j < words.size() - i - 1; ++j)
	  {
            if (words[j] > words[j + 1])
	      swap(words[j], words[j + 1]);
	  }
       }
    
    return words;
    
}

void MergeFiles(string file1, string file2)
{
    vector<string> words1 = FiletoVec(file1);
    vector<string> words2 = FiletoVec(file2);

    ofstream out("output.txt");

    if (!out.is_open())
      {
        cerr << "oopie files no wrk" << endl;

	return;
	
      }

    size_t i = 0, j = 0;
    bool firstLine = true;

    // merge the two sorted vectors
    while (i < words1.size() && j < words2.size())
      {
        if (words1[i] <= words2[j])
	  {
            if (!firstLine)
	      out << endl;
            out << words1[i++];
	    
            firstLine = false;
	  }
	else
	  {
            if (!firstLine)
	      out << endl;
            out << words2[j++];
	    
            firstLine = false;
	  }
       }

    // write remaining words from words1, if any
    while (i < words1.size())
      {
        if (!firstLine)
	  out << endl;
        out << words1[i++];
	
        firstLine = false;
      }

    // same for  words2
    while (j < words2.size())
      {
        if (!firstLine)
	  out << endl;
        out << words2[j++];
	
        firstLine = false;
      }

    out.close();
}

int main(int argc, char* argv[])
{
    if (argc < 3) {
        cerr << "Usage: " << argv[0] << " <file1> <file2>" << endl;
        return 1;
    }

    MergeFiles(argv[1], argv[2]);

    return 0;
}
