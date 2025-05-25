#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("\033[34mHappy Labour Day!");
    printf("\n");
    printf("\033[35mv.1.1\n");
    printf("\033[34m2025 XuHongdi.\n");
    system("neofetch");
    system("adb shell input keyevent 26"); //熄屏
    system("adb shell input keyevent 26"); //亮屏
    system("adb shell input keyevent 26"); //熄屏
    system("adb shell input keyevent 26"); //亮屏   
    system("adb shell input keyevent 26"); //熄屏
    system("adb shell input keyevent 26"); //亮屏
    system("adb shell input keyevent 26"); //熄屏
    system("adb shell input keyevent 26"); //亮屏
    system("firefox https://www.baidu.com");
    system("curl wttr.in");
    return 0;
    
}