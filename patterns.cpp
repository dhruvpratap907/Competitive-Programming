# include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter a value"<<"\n";
    cin>>n;
    for(int i=0; i<n; i++ ){
        char ch='a';
        for(int m=0; m<n; m++){
            cout<<ch<<"  ";
            ch=ch+1;
           
        }
        cout<<"\n";
    }
    for(int j=0; j<n; j++){
        for(int k=0; k<n; k++){
            cout<<'*';
        }
        cout<<endl;
    }
    int num='A';
    for(int l=0; l<n; l++){
        for(int o=0; o<n; o++){
            cout<<(char)num<<" ";
            num++;

        }
        cout<<endl;
    }
    int let=1;
    for(int x=0; x<n; x++){
        for(int y=0; y<n; y++){
            cout<<let<<"   ";
            let++;

        }
        cout<<endl;
    }
    
    for(int g=0; g<n; g++){
        for(int h=0; h<=g ; h++){
            cout<<'*';
            
        }
        cout<<"\n";
    }
    int f='A';
    for(int g=0; g<n; g++){
        
        for(int h=0; h<=g ; h++){
            cout<<(char)f;// quest in mind is who does it determines that to print 1 or 2 values only in a line 
            //so this depends on in inner loop as n is >=g(vise versa of >= is<=) so condition becomdes true and the lopps runs and then again it become true
            //as the value of g++ so there are twoo (true condition) i:as h=0 so again condition becomes true and inner lopps run ii:when loops run h becomes as =gso it again runs
        }
        f++;
        cout<<"\n";
        
        
    }
    for(int g=0; g<n; g++){
        int i=1;
        for(int h=0; h<=g ; h++){
            cout<<i;
            i++;
            
        }
        cout<<"\n";
    }
    
    for(int g=0; g<n; g++){
        
        for(int h=g+1; h>0 ; h--){
            cout<<h<<"  "; // if you want to start it with 0 for(int h=g; h>=0 ; h--)
            
            
        }
        
        cout<<"\n";
    }
    int dhruv=1;
    for(int g=0; g<n; g++){
        for(int h=0; h<g ; h++){
            cout<<dhruv;
            dhruv++;
        }
        cout<<"\n";
    }
    
     for(int i=0; i<n; i++){
        int sat='A'+i;
        for (int j = sat; j>='A' ; j--)
        {
            cout<<(char)j;
        }
        cout<<"\n";
     }
    
    cout<<"\n";
    return 0;
}