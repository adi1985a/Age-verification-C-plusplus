#include <iostream>
#include <string>
#include <windows.h>

void drawBox(int width, int height, int startX, int startY) {
    COORD coord;
    for (int i = 0; i < height; i++) {
        coord.X = startX;
        coord.Y = startY + i;
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
        for (int j = 0; j < width; j++) {
            if (i == 0 || i == height-1) {
                std::cout << "-";
            } else if (j == 0 || j == width-1) {
                std::cout << "|";
            } else {
                std::cout << " ";
            }
        }
    }
}

void clearScreen() {
    system("cls");
}

int main() {
    std::string input;
    bool running = true;

    while (running) {
        clearScreen();
        
        // Draw title
        std::cout << "\n\n";
        std::cout << "            Age Verification Program\n";
        std::cout << "            ----------------------\n\n";

        // Draw input box
        drawBox(30, 3, 25, 8);
        COORD inputPos = {26, 9};
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), inputPos);
        
        // Draw button
        std::cout << "\n\n";
        std::cout << "            [Check Age]\n\n";
        
        // Get input
        std::cout << "Enter your age (or 'q' to quit): ";
        std::getline(std::cin, input);

        if (input == "q" || input == "Q") {
            running = false;
            continue;
        }

        try {
            int age = std::stoi(input);
            std::cout << "\nResult: ";
            if (age >= 40) {
                std::cout << "You are of legal age and can run for president in Norway!\n";
            } else if (age >= 18) {
                std::cout << "You're an adult, but you can't run for president in Norway yet!\n";
            } else {
                std::cout << "You are underage and cannot run for president in Norway!\n";
            }
        } catch (...) {
            std::cout << "\nPlease enter a valid number.\n";
        }

        std::cout << "\nPress Enter to continue...";
        std::cin.get();
    }

    return 0;
}