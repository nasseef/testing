/**
 *   @file: program.cc
 * @author: Nasseef Abukamail
 *   @date: November 09, 2021
 *  @brief: Add Description
 */

#include <iostream>
#include <string>
using namespace std;

struct UserProfile {
    string name;
    string email;
    string username;
    string profilePicture;

    UserProfile(string profileName, string profileEmail, string profileUsername,
                string picture = "default-profile.png")
        : name(profileName), email(profileEmail), username(profileUsername),
          profilePicture(picture) {}

    void updateProfilePicture(const string& newProfilePicture) {
        if (!newProfilePicture.empty()) {
            profilePicture = newProfilePicture;
        }
    }

    void display() const {
        cout << "User Profile" << endl;
        cout << "Name: " << name << endl;
        cout << "Email: " << email << endl;
        cout << "Username: " << username << endl;
        cout << "Profile Picture: " << profilePicture << endl;
    }
};

int main(int argc, char const* argv[]) {
    UserProfile profile("Demo User", "demo@example.com", "demo-user");

    if (argc >= 4) {
        profile = UserProfile(argv[1], argv[2], argv[3]);
    }

    if (argc >= 5) {
        profile.updateProfilePicture(argv[4]);
    }

    profile.display();
    return 0;
} /// main
