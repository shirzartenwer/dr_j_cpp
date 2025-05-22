#include <iostream>
#include <fstream>
using namespace std;

int main () {
    // ofstream outfile;

    // cout << "Writing to file " << endl;
    // outfile.open("output.txt");
    // outfile << fixed << showpoint;
    // cout << fixed << showpoint;

    // for (int i = 0; i<=10; i++){
    //     outfile << setw(12) << setprecision(2) << (i * 5.7575) 
    //     << setw(12) << setprecision(3) << (i * 3.14159) << endl;

    //     cout << setw(12) << setprecision(2) << (i * 5.7575) 
    //     << setw(12) << setprecision(3) << (i * 3.14159) << endl;


    // }

    // outfile.close();
    // cout << "Done!" << endl;

    ifstream infile;
    infile.open("input.txt");

    int inputNum;
    int sum = 0;

    vector<int> myInts;

    while (!infile.eof()){
        infile >> inputNum;
        myInts.push_back(inputNum); 
        sum +=inputNum;
    }

    cout << "Sum of number is: " << sum << endl;

    infile.close();


    ifstream ageFile;
    ifstream namesFile;
    ofstream resultFile;

    string tempName;
    int tempAge;

    cout << "Opening files..." << endl;

    namesFile.open("names.txt");
    ageFile.open("ages.txt");

    if(!namesFile || !ageFile) {
        cout << "Problems opening one of the failes...bailing out " << endl;
        
    }


    namesFile.close();
    ageFile.close();
    resultFile.close();


    ifstream scorefile;
    scorefile.open("scores.txt");

    int inputNum2;
    double sum2 = 0;
    int count = 0;
    int min = 0;
    double average = 0.0;

    if (!scorefile){
        cout << "error: opening file. Bailing out." << endl;
    }

    while (!scorefile.eof()){
        average = sum2/count;
    }

    cout << "Statistics:" << endl;
    // cout << "\tmax: " << max << endl;
    // cout << "\tmin:" << 

    
    scorefile.close();



    return 0;
}