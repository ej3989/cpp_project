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

void brouse(int superFlag,totalManager& King);
int main(){
    totalManager King;
    King.loadCar();
    King.loadHuman();


    cout<<"===========================================================================";
    cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
    cout<<right<<setw(80)<<"홈페이지 접속을 원하시면 아무 키나 누르세요"<<endl;
    cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
    cout<<"===========================================================================";
    getchar();
    char choiceMenu;
    while(1){
        cout<<"===========================================================================";
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
        cout<<right<<setw(78)<<"1. 일반 로그인 2. 관리자 로그인 3. 회원가입 :"<<endl;
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
        cout<<"===========================================================================";
        cin>>choiceMenu;
    string tempID, tempPW;
    Customer nowUser;
    switch(choiceMenu){
        case '1' :
            cout<<"ID : ";
            cin>>tempID;
            //king 클래스 리스트 소환.
            nowUser = King.findUser(tempID);
            cout<<"PW : ";
            cin>>tempPW;
            if(nowUser.correct_psswd(tempID,tempPW)){
                brouse(nowUser.checkAdmin(),King);
            }
            else cout<<"잘못 입력하셨습니다"<<endl;
            break;
        case '2' :
            cout<<"ID : ";
            cin>>tempID;
            //king 클래스 리스트 소환.
            //아이디를 확인할수 있는 함수를 만들어주세요.
            cout<<"PW : ";
            cin>>tempPW;
            if(1){ //correct_ppswd()
                int superFlag =1;
                brouse(superFlag,King);
            }
            else cout<<"잘못 입력하셨습니다"<<endl;
            break;
        case '3' :
            King.join();
            break;
        default :
            cout<<"잘못 입력하셨습니다"<<endl;
            break;
        
    }
    }
    

}
void brouse(int superFlag,totalManager& King){
   cout<<left<<setw(40)<<"1. 구매 가능 리스트"<<endl;
   cout<<left<<setw(40)<<"2. Top 5"<<endl;
   cout<<left<<setw(40)<<"3. 장바구니 목록"<<endl;
   cout<<left<<setw(40)<<"4. 구매차량 AS위치 "<<endl;
   if(superFlag==1){
        cout<<left<<setw(40)<<"5. 차량 추가"<<endl;
        cout<<left<<setw(40)<<"6. 재고관리"<<endl;
   }

   cout<<left<<setw(40)<<"9. 뒤로가기"<<endl;
   int number;
   cin>>number;
   switch(number){
        case 1:
            cout<<setw(30)<<left<<"브랜드"<<setw(30)<<left<<"엔진"<<setw(30)<<left<<"차량이름"<<setw(30)<<left<<"색상"<<setw(30)<<left<<"타입"<<setw(30)<<left<<"가격"<<endl<<endl;
            //stockMangagerCar 리스트 소환하기.
            break;
        case 2:
            //탑리스트 stock 소환하기 필요
           cout<<setw(10)<<left<<"브랜드"<<setw(10)<<left<<"엔진"<<setw(10)<<left<<"차량이름"<<setw(10)<<left<<"색상"<<setw(10)<<left<<"타입"<<setw(10)<<left<<"가격"<<endl<<endl;
            //stockMangagerCar 리스트 소환하기.
            break;
        // case 3:
        //     //토탈매니저 장바구니 목록 확인
        // break;
        // case 4:
        // break;
        // case 5:
        // break;
   }
}