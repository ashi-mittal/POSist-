#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<string.h> // using string function such as append

using namespace std;

int nodeNumber=0;

struct date{
    int day;
    int month;
    int year;
    int hour;
    int mint;
    int sec;
};

/*struct datastruct{
    string ownerId;
    string ownerName;
    string value;
};*/

struct Node{
    date timestamp;
    string data;
    int nodeNumber;
    string nodeId;
    string referenceNodeId;
    string childReferenceNodeId;
    string genesisReferenceNodeId;
    string HashValue;

    Node *next;
}*genesis;

string returnTimestamp(date ts){
}

bool checkParentValue(float value){
// parent value should be greater or equal to the total sum value of its child node
}

string convertValue(float value){
    // returns a string with upto 2 decimal values as a string for value in data
    string finalValue = "";

    /*int flag=-1;

    for(int i=0; i<value.length(); i++){
        if(flag==-1)
            finalValue.append(value.substr(i,1));

        if(value.substr(i,1)=="."){
            finalValue.append(value.substr(i+1,2));

            flag = i;

            break;
        }
    }*/

    value.setprecision(2);

    return finalValue;
}

string setData(string ownerId, string ownerName, float value){
// for setting up data with all the paramenters.
// the three parts(owner id, owner name, value) are seprated by " XXXXXXXXXX " in one single string.

        string dataForNode = "";
        string diff = "  XXXXXXXXXX  ";

        dataForNode.append(diff);
        dataForNode.append(ownerId);
        dataForNode.append(diff);
        dataForNode.append(ownerName);
        dataForNode.append(diff);
        dataForNode.append(convertValue(value));
        dataForNode.append(diff);

    return dataForNode;
}

string setHashValue(date timestamp, string data, int nodeNumber, string nodeId, string referenceNodeId, string childReferenceNodeId, string genesisReferenceNodeId){
// for setting the values

}

string encrypt(string toEncrypt){
// for encryption of data for any node
    char key = 'K';
    string output = toEncrypt;

    for (int i = 0; i < toEncrypt.size(); i++)
        output[i] = toEncrypt[i] ^ key;

    return output;
}

string decrypt(string toDecrypt){
// fro decryption of any node
    char key[3] = {'K', 'C', 'Q'};
    string output = toDecrypt;

    for (int i = 0; i < toDecrypt.size(); i++)
        output[i] = toDecrypt[i] ^ key[i % (sizeof(key) / sizeof(char))];

    return output;
}

void createGenesis(){
    date dateEntered;
    cout<<"Enter the following Time values of the node : "<<endl;
    cout<<"Date in format (ddmmyyyy) : ";
    cin>>dateEntered.day>>dateEntered.month>>dateEntered.year;
    cout<<"Time in format (hhmmss) : ";
    cin>>dateEntered.hour>>dateEntered.month>>dateEntered.year;

    genesis->timestamp = dateEntered;

    string ON,OI;
    float V;
    cout<<"Enter the following Data values of the node : "<<endl;
    cout<<"Owner name : ";
    cin>>ON;
    cout<<"Owner Id :";
    cin>>OI;
    cout<<"Value (Decimal value)";
    cin>>V;

    genesis->data = setData(OI,ON,V);

    genesis->nodeNumber = nodeNumber;

    genesis->childReferenceNodeId="";
    genesis->referenceNodeId="";

    genesis->next = NULL;

    nodeNumber++;
}

void createChild(){

    Node *child = new Node;

    date dateEntered;
    cout<<"Enter the following Time values of the node : "<<endl;
    cout<<"Date in format (ddmmyyyy) : ";
    cin>>dateEntered.day>>dateEntered.month>>dateEntered.year;
    cout<<"Time in format (hhmmss) : ";
    cin>>dateEntered.hour>>dateEntered.month>>dateEntered.year;

    child->timestamp = dateEntered;

    string ON,OI;
    float V;
    cout<<"Enter the following Data values of the node : "<<endl;
    cout<<"Owner name : ";
    cin>>ON;
    cout<<"Owner Id :";
    cin>>OI;
    cout<<"Value (Decimal value)";
    cin>>V;

    child->data = setData(OI,ON,V);

    child->nodeNumber = nodeNumber;

    child->childReferenceNodeId="";
    child->referenceNodeId="";

    child->next = NULL;

    if(genesis->next == NULL)
        genesis->next= child;
    else{
        Node *ptr=
        while()
    }

    nodeNumber++;
}

int main(){

    cout<<"\n\n\n";

    cout<<"Functions you want to perform on the following node : ";
    cout<<"1. Create Genesis node (Root node)"<<endl;
    cout<<"2. Create a child node for a particular node. "<<endl;
    cout<<"3. Create a child node that originates from a particular node"<<endl;
    cout<<"4. Encrypt Node data"<<endl;
    cout<<"5. Decrypt Node data"<<endl;
    cout<<"6. Edit value of a node"<<endl;
    cout<<"7. Transfer ownership of a particular node"<<endl;
    cout<<"8. Verify the owner of the node"<<endl;
    cout<<"9. Longest chain of genesis node"<<endl;
    cout<<"10. Longest chain of any node"<<endl;
    cout<<"11. Merger two nodes"<<endl;
    cout<<"Choose your option"<<endl;

    int choice;
    cin>>choice;

    switch(choice){
        case 1: createGenesis();
                break();
        case 2: createGenesis();
                break();
        case 3: createGenesis();
                break();
        case 4: encrypt(toEncrypt);
                break();
        case 5: decrypt(toDecrypt);
                break();
        case 6: createGenesis();
                break();
        case 7: createGenesis();
                break();
        case 8: createGenesis();
                break();
        case 9: createGenesis();
                break();
        case 10: createGenesis();
                break();
        case 11: createGenesis();
                break();
    }


    return 0;
}
