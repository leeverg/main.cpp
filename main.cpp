#include <iostream>
#include <string>

using namespace std;

bool processTiktokCpp(string url) {
    cout << "[*] جاري معالجة الرابط بلغة C++: " << url << endl;
    if (url.find("tiktok.com") != string::npos) {
        cout << "[+] ممتاز! تم التحقق من رابط تيك توك بنجاح بواسطة C++." << endl;
        return true;
    } else {
        cout << "[-] تنبيه: الرابط غير صحيح." << endl;
        return false;
    }
}

int main() {
    cout << "=== أداة معالجة التيك توك (إصدار C++) ===" << endl;
    string user_url;
    cout << "الرجاء إدخال الرابط هنا: ";
    cin >> user_url;
    processTiktokCpp(user_url);
    return 0;
}
