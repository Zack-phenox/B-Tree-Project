#include<bits/stdc++.h>
using namespace std;

struct student{
    int ID;
    string name;
    char grade;

//    void dislay(int ID,string name,char grade){
//     cout<<ID<<" "<<name<<" "<<grade<<endl;
//    } 

//    void serialization(ofstream& intemp){
    
//     intemp<< ID<<'\n'<<name<<'\n'<<grade<<endl;
//    }

//    void deseriaization(ifstream& ontemp){
//     getline(ontemp,name);
//     ontemp>>ID>>grade;
//     ontemp.ignore();
void display(int ID, string name, char grade) {
    cout << ID << " " << name << " " << grade << endl;
}

// Serialization function to write data to file
void serialization(ofstream& intemp) {
    intemp << ID << '\n' << name << '\n' << grade << endl;  
}

// Deserialization function to read data from file
void deserialization(ifstream& ontemp) {
    getline(ontemp, name);   // Read the entire name (including spaces)
    ontemp >> ID >> grade;    // Read ID (integer) and grade (character)
    ontemp.ignore();          // Ignore the newline character left after reading grade
}


   };

int main(){
    student s;
    ofstream outFile("student_data.txt");
    int ID = 1;
    string name = "John Doe";
    char grade = 'A';
     s.serialization(outFile);
    outFile.close();

    // Example deserialization
    ifstream inFile("student_data.txt");
    s.deserialization(inFile);
    s.display(ID, name, grade);
    inFile.close();

    return 0;
}

