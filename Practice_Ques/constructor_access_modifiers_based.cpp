
#include <iostream>
using namespace std;

class user{

private:

   int user_id;
   string user_password;

public: 
   string user_username;

   user(int id){
      user_id = id;
   }

   string getpassword(){
    return user_password;
   }

   void setpassword(string password){
       user_password = password;
   }

};
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    user u1(25011);
    u1.user_username = "Amrinder singh";
    u1.setpassword("Amxr@inder");

    cout << "username : " << u1.user_username << endl;
    cout << "Password : " << u1.getpassword() << endl;

    return 0;
} 