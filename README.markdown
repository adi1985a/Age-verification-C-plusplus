# 🇳🇴🗳️ Norway Presidential Age Verifier 🆔
_A C++ console application to verify age eligibility for running for president in Norway, featuring a graphical input box and Windows console manipulation._

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
[![C++](https://img.shields.io/badge/Language-C%2B%2B%2011%2B-blue.svg)](https://isocpp.org/)
[![Platform: Windows](https://img.shields.io/badge/Platform-Windows-lightgrey.svg)](https://www.microsoft.com/windows)

## 📋 Table of Contents
1.  [Overview](#-overview)
2.  [Key Features](#-key-features)
3.  [Screenshots (Conceptual)](#-screenshots-conceptual)
4.  [System Requirements](#-system-requirements)
5.  [Installation and Setup](#️-installation-and-setup)
6.  [Usage Guide](#️-usage-guide)
7.  [File Structure](#-file-structure)
8.  [Technical Notes](#-technical-notes)
9.  [Contributing](#-contributing)
10. [License](#-license)
11. [Contact](#-contact)

## 📄 Overview

The **Norway Presidential Age Verifier**, developed by Adrian Lesniak, is a C++ console application designed to determine if a user meets the age requirement to run for president in Norway. It presents a simple graphical interface within the console, featuring a drawn input box for age entry and a "Check Age" button element. The program utilizes Windows-specific console functions for cursor positioning (`SetConsoleCursorPosition`) and screen clearing (`system("cls")`). It includes input validation to handle non-numeric entries and provides clear feedback based on whether the entered age meets the eligibility criteria (≥40 years), is adult but not eligible (≥18), or is underage (<18).

## ✨ Key Features

*   🖼️ **Graphical Console Interface**:
    *   `drawBox`: A function that renders a rectangular input box using ASCII characters (`-`, `|`, spaces) for a more visual input experience.
    *   Displays a clear title ("Age Verification Program") and a textual button element ("[Check Age]").
*   ⚖️ **Age Verification Logic**:
    *   Checks if the entered age is **≥ 40 years**: If so, the user is deemed eligible to run for president in Norway.
    *   Checks if the entered age is **≥ 18 years but < 40**: The user is an adult but not yet eligible for presidency.
    *   If age is **< 18 years**: The user is marked as underage and not eligible.
*   🖥️ **Console Management (Windows-specific)**:
    *   `clearScreen`: Clears the console window using `system("cls")`.
    *   `SetConsoleCursorPosition`: Used for precise placement of text elements like the title, input box, and messages.
*   ✔️ **Robust Input Handling**:
    *   Accepts numeric input for age.
    *   Allows the user to quit by entering 'q' or 'Q'.
    *   Validates input using `std::stoi` and handles potential exceptions (e.g., `std::invalid_argument`) for non-numeric input, prompting the user appropriately.
*   🔄 **Interactive Loop**:
    *   The main program runs in a loop, allowing multiple age checks until the user decides to quit.
    *   Displays verification results and waits for an Enter keypress to continue or re-prompt.

## 🖼️ Screenshots (Conceptual)

**Coming soon!**

_This section would ideally show a screenshot of the console window displaying the title, the ASCII input box with the prompt, the "[Check Age]" button, and an example result message._

## ⚙️ System Requirements

*   **Operating System**: Windows (due to the direct use of Windows-specific console API functions like `SetConsoleCursorPosition` from `<windows.h>` and `system("cls")`).
*   **C++ Compiler**: A C++ compiler that supports C++11 or later and can link with Windows libraries (e.g., g++ via MinGW, MSVC).
*   **Standard C++ Libraries**: `<iostream>`, `<string>`, `<vector>` (if used internally), `<stdexcept>`, `<limits>`.
*   Windows-specific library: `<windows.h>`.

## 🛠️ Installation and Setup

1.  **Clone the Repository**:
    ```bash
    git clone <repository-url>
    cd <repository-directory>
    ```
    *(Replace `<repository-url>` and `<repository-directory>` with your specific details)*

2.  **Save Main Code**:
    Ensure your main program logic (including the `drawBox` function, age verification logic, console manipulation, and `main()` function) is saved as `age_verification.cpp` (or your chosen main file name) in the project directory. *(The description implies a single-file structure for this project).*

3.  **Compile the Program**:
    Open a Windows terminal (Command Prompt, PowerShell, etc.) in the project directory.
    **Example using g++ (MinGW):**
    ```bash
    g++ age_verification.cpp -o age_verification.exe -static-libgcc -static-libstdc++ -std=c++11
    ```
    *(Adjust compiler flags if using MSVC or another compiler. The `-static-libgcc -static-libstdc++` flags are for MinGW to create a more standalone executable).*

4.  **Run the Program**:
    ```bash
    .\age_verification.exe
    ```
    (or `age_verification.exe` in CMD)

## 💡 Usage Guide

1.  Compile and run `age_verification.exe` as detailed above.
2.  **Interface**:
    *   The console window will display the "Age Verification Program" title.
    *   An ASCII art input box will be drawn, prompting you to "Enter your age or 'q' to quit: ".
    *   A textual "[Check Age]" button will be displayed.
3.  **Input**:
    *   Type your age as a number (e.g., `35`) and press Enter.
    *   Alternatively, type `q` or `Q` and press Enter to quit the application.
4.  **Output & Results**:
    *   Based on the age entered:
        *   If age ≥ 40: "You are of legal age and can run for president in Norway!"
        *   If age ≥ 18 and < 40: "You're an adult, but you can't run for president in Norway yet!"
        *   If age < 18: "You are underage and cannot run for president in Norway!"
    *   If non-numeric input (other than 'q'/'Q') is entered: "Please enter a valid number."
5.  **Actions**:
    *   After a result is displayed (or an error message), the program will prompt: "Press Enter to continue...". Pressing Enter will clear the result and re-display the input prompt for another check.
    *   The program exits if 'q' or 'Q' is entered at the age prompt.

## 🗂️ File Structure

*   `age_verification.cpp`: The main (and likely only) C++ source file containing all program logic, including UI drawing, input handling, and age verification.
*   `README.md`: This documentation file.

*(No external data or log files are mentioned as being created or used by this project in the provided description.)*

## 📝 Technical Notes

*   **Windows-Specific Implementation**: This program is heavily reliant on Windows-specific console functionalities:
    *   `<windows.h>` for `SetConsoleCursorPosition` (precise text placement) and potentially other console handles.
    *   `system("cls")` for clearing the screen.
    *   Adapting this for cross-platform use would require replacing these with alternatives like the ncurses library for advanced console manipulation or simplifying the UI to standard sequential output.
*   **Input Box Design**: The `drawBox` function creates a fixed-size (e.g., 30x3 characters) input box using ASCII characters. The dimensions are hardcoded and would require code changes to adjust.
*   **Input Validation**: Uses `std::stoi` for string-to-integer conversion, with `try-catch` blocks to handle `std::invalid_argument` (for non-numeric input) and `std::out_of_range` (for numbers too large for an `int`).
*   **No Locale Settings**: The program uses English text for all prompts and messages.
*   **Potential Enhancements**:
    *   Adding colored output (using `SetConsoleTextAttribute` from `<windows.h>`) to differentiate messages (e.g., green for eligible, red for not eligible/errors).
    *   Implementing more sophisticated eligibility rules if applicable.
    *   Developing a cross-platform version using a library like ncurses or by simplifying the UI.

## 🤝 Contributing

Contributions to the **Norway Presidential Age Verifier** are welcome, especially if they aim to improve cross-platform compatibility, enhance the user interface, or add more features.

1.  Fork the repository.
2.  Create a new branch for your feature (`git checkout -b feature/YourEnhancementIdea`).
3.  Make your changes and commit them (`git commit -m 'Feature: Implement YourEnhancementIdea'`).
4.  Push to the branch (`git push origin feature/YourEnhancementIdea`).
5.  Open a Pull Request.

Please ensure your code is well-commented and adheres to good C++ practices.

## 📃 License

This project is licensed under the **MIT License**.
(If you have a `LICENSE` file in your repository, refer to it: `See the LICENSE file for details.`)

## 📧 Contact

Created by **Adrian Lesniak**.
For questions, feedback, or issues, please open an issue on the GitHub repository or contact the repository owner.

---
🗳️ _Verifying eligibility, one console application at a time._
