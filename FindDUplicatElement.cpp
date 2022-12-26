


#include <iostream>

using namespace std;

void countDuplicat(string *tab, string kata, int arrLen){
    
    int i =0;
    int count = 0;
    
    for(int indexNow=0; indexNow<arrLen; indexNow++){
        if (tab[indexNow]==kata)
        {
            int now = indexNow;
        
            for (int i; i < arrLen; i++)
            {
                if(tab[i]==tab[now]){
                    count++;
                    }
            }
        }
    }
    cout<<count<<endl;
}

int main(){
    
    string kata, input;
    int arrLen;
    
    cout<<"Masukkin Kata : ";
    cin >>input;
    arrLen = input.length();
    string tab[arrLen];
    
    for(int a=0; a<arrLen; a++){
        tab[a]=input.substr(a,1);
    }

    
    for(int y = 0; y<7; y++){
        kata = tab[y];
        cout<<tab[y] <<" : ";
        countDuplicat(tab, kata, arrLen);
    }
}
