#include <iostream>
#include <vector>
#include <string>
#include "stockmanagecar.h"
#include "totalManager.h"
#include "car.h"
#include "customerCar.h"
#include <iomanip>
#include <cstring>
#include <termio.h>
using namespace std;

void brouse(int superFlag,totalManager& King,Customer & nowUser);
int main(){
    totalManager King;
    King.loadCar();
    King.loadHuman();
    struct termio tbuf, oldtbuf;
    if(ioctl(0, TCGETA, &tbuf) == -1) { // 현재터미널모드
        perror("ioctl");    exit(1);
    }
    oldtbuf=tbuf;
    tbuf.c_lflag &= ~ECHO;
    tbuf.c_lflag&=~ICANON;
    tbuf.c_cc[VMIN] =1;
    tbuf.c_cc[VTIME]=0;
    if(ioctl(0, TCSETAF, &tbuf)==-1) {
        perror("ioctl"); exit(1);
    }
    cout<<"===========================================================================";
    cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
    cout<<right<<setw(80)<<"홈페이지 접속을 원하시면 아무 키나 누르세요"<<endl;
    cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
    cout<<"===========================================================================";
    getchar();
    int choiceMenu;
    while(1){
        if(ioctl(0, TCSETAF, &tbuf)==-1) {
            perror("ioctl"); exit(1);
        }
        cout<<endl;
        cout<<"===========================================================================";
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
        cout<<right<<setw(78)<<"1. 일반 로그인 2. 관리자 로그인 3. 회원가입 :"<<endl;
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
        cout<<"===========================================================================";
        cin>>choiceMenu;
        string tempID, tempPW;
        if(ioctl(0, TCSETAF, &oldtbuf)==-1) {
            perror("ioctl"); exit(1);
        }
        Customer nowUser;
        switch(choiceMenu){
            case 1 :
                cout<<"ID : ";
                cin>>tempID;
                nowUser= King.findUser(tempID);
                cout<<"PW : ";
                cin>>tempPW;
                if(nowUser.correct_psswd(tempID,tempPW)){
                    brouse(nowUser.checkAdmin(),King,nowUser);
                }
                else cout<<"잘못 입력하셨습니다"<<endl;
                break;
            case 2 :
                cout<<"ID : ";
                cin>>tempID;
                nowUser= King.findUser(tempID);
            cout<<"PW : ";
            cin>>tempPW;
            if(nowUser.correct_psswd(tempID,tempPW)){
                brouse(nowUser.checkAdmin(),King,nowUser);
            }
            else cout<<"잘못 입력하셨습니다"<<endl;
            break;

            case 3 :
                King.join();
                break;
            default :
                cout<<"잘못 입력하셨습니다"<<endl;
                break;
        
        }
    }
    

}
void brouse(int superFlag,totalManager& King,Customer & nowUser){
    cout<<"===========================================================================";
    cout<<endl<<endl<<endl<<endl<<endl;
    cout<<setw(30)<<" "<<"1. 구매 가능 리스트"<<endl;
    cout<<setw(30)<<" "<<"2. Top 5"<<endl;
    cout<<setw(30)<<" "<<"3. 장바구니 목록"<<endl;
    cout<<setw(30)<<" "<<"4. 구매차량 AS위치 "<<endl;
    if(superFlag==1){
        cout<<setw(30)<<" "<<"5. 차량 추가"<<endl;
        cout<<setw(30)<<" "<<"6. 재고관리"<<endl;
    }
    else{cout<<endl<<endl;}
   cout<<setw(30)<<" "<<"9. 뒤로가기"<<endl;
   cout<<endl<<endl<<endl<<endl;
   cout<<"===========================================================================";
   int number;
   cin>>number;
   switch(number){
        case 1:
            cout<<setw(30)<<left<<"브랜드"<<setw(30)<<left<<"엔진"<<setw(30)<<left<<"차량이름"<<setw(30)<<left<<"색상"<<setw(30)<<left<<"타입"<<setw(30)<<left<<"가격"<<endl<<endl;
            //stockMangagerCar 리스트 소환하기
            
            break;
        case 2:
            //탑리스트 stock 소환하기 필요
           cout<<setw(10)<<left<<"브랜드"<<setw(10)<<left<<"엔진"<<setw(10)<<left<<"차량이름"<<setw(10)<<left<<"색상"<<setw(10)<<left<<"타입"<<setw(10)<<left<<"가격"<<endl<<endl;
            //stockMangagerCar 리스트 소환하기.
            break;
        case 3:
            //nowUser.addCart(); //카리스트 뷰로 보기
            break;
        case 4:
            King.addCarList();
            break;
        case 5:
            //재고관리 만들어주세요
            break;
        case 9:
            
            return;
        default:
            cout<<"잘못 누르셨습니다"<<endl;
            break;
   }
}