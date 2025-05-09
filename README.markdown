# Age Verification Program

## Overview
This C++ console application verifies a user's age to determine eligibility to run for president in Norway. It features a graphical interface with a drawn input box, uses Windows console cursor positioning, and includes error handling for invalid inputs. Users can input their age or quit, with results displayed based on age thresholds.

## Features
- **Graphical Interface**:
  - `drawBox`: Draws a rectangular box for input using ASCII characters (`-`, `|`, spaces).
  - Displays a title ("Age Verification Program") and a button ("[Check Age]").
- **Age Verification**:
  - Checks if age ≥ 40 (eligible to run for president in Norway).
  - Checks if age ≥ 18 (adult, not eligible).
  - Otherwise, marks as underage.
- **Console Management**:
  - `clearScreen`: Clears the console using `system("cls")`.
  - Uses `SetConsoleCursorPosition` for precise text placement.
- **Input Handling**:
  - Accepts numeric age or 'q'/'Q' to quit.
  - Validates input with `std::stoi` and handles exceptions for non-numeric input.
- **Main Program**:
  - Runs in a loop until the user quits.
  - Displays results and waits for Enter to continue.

## Requirements
- C++ compiler (e.g., g++, MSVC)
- Windows OS (for `windows.h` and console functions)
- Standard C++ libraries: `<iostream>`, `<string>`, `<windows.h>`
- Operating system: Windows (due to `SetConsoleCursorPosition` and `system("cls")`)

## Setup
1. Clone the repository:
   ```bash
   git clone <repository-url>
   cd <repository-directory>
   ```
2. Save the provided code as `age_verification.cpp`.
3. Compile the program:
   ```bash
   g++ age_verification.cpp -o age_verification
   ```
4. Run the program:
   ```bash
   .\age_verification
   ```

## Usage
1. Compile and run the program using the steps above.
2. **Interface**:
   - Displays a title, an input box, and a "Check Age" button.
   - Prompts for age input or 'q' to quit.
3. **Input**:
   - Enter a number (age) or 'q'/'Q' to exit.
4. **Output**:
   - For age ≥ 40: "You are of legal age and can run for president in Norway!"
   - For age ≥ 18: "You're an adult, but you can't run for president in Norway yet!"
   - For age < 18: "You are underage and cannot run for president in Norway!"
   - For invalid input: "Please enter a valid number."
5. **Actions**:
   - Press Enter to continue after each result.
   - Quit by entering 'q' or 'Q'.

## File Structure
- `age_verification.cpp`: Main C++ source file with program logic.
- `README.md`: This file, providing project documentation.

## Notes
- Windows-specific due to `windows.h` and `system("cls")`; adapt for other OS (e.g., use `system("clear")` for Unix).
- No locale settings; uses English text for output.
- Input box is fixed at 30x3 characters; adjust `drawBox` parameters for different sizes.
- Extend by adding more eligibility rules, color output, or cross-platform support.
- No external dependencies beyond Windows API and standard C++ libraries.
- Test with various ages and invalid inputs to ensure robust error handling.

## Contributing
Contributions are welcome! To contribute:
1. Fork the repository.
2. Create a new branch (`git checkout -b feature-branch`).
3. Make changes and commit (`git commit -m "Add feature"`).
4. Push to the branch (`git push origin feature-branch`).
5. Open a pull request.

## License
This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

## Contact
For questions or feedback, open an issue on GitHub or contact the repository owner.