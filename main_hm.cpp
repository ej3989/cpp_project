#include <iostream>
#include <vector>
#include <string>
#include "stockmanagecar.h"
#include "totalManager.h"
#include "car.h"
#include "customerCar.h"
#include <iomanip>
#include <cstring>
using namespace std;

int main(){
    totalManager King;
    King.loadCar();
    King.loadHuman();



    cout<<right<<setw(20)<<"홈페이지 접속을 원하시면 아무 키나 누르세요"<<endl;
    getchar();
    char choiceMenu;
    while(1){
    cout<<right<<setw(20)<<"1. 일반 로그인 2. 관리자 로그인 3. 회원가입"<<endl;
    switch(choiceMenu){
        case '1' :
            string tempID, tempPW;
            cout<<"ID : ";
            cin>>tempID;
            //king 클래스 리스트 소환.
            //아이디를 확인할수 있는 함수를 만들어주세요.
            cout<<"PW : ";
            cin>>tempPW;
            if(correct_psswd()){
                //brouse(); 시행
            }
            
            



        case '2' :
            string tempID, tempPW;
            cout<<"ID : ";
            cin>>tempID;
            //king 클래스 리스트 소환.
            //아이디를 확인할수 있는 함수를 만들어주세요.
            cout<<"PW : ";
            cin>>tempPW;
            correct_psswd();

        case '3' :
            King.join();

        default :
            cout<<"잘못 입력하셨습니다"<<endl;
            break;
        
    }
    }
    

}