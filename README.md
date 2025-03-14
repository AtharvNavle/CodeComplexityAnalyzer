# CodeComplexityAnalyzer
Project Overview:
The Code Complexity Analyzer is a tool designed for statically analyzing C/C++ source code to detect key structural elements and compute Cyclomatic Complexity, a metric that measures the complexity of a program's control flow. This tool is useful for developers, software engineers, and development teams looking to assess the maintainability, testability, and overall complexity of their code.

By scanning the source code, the tool identifies:

Functions
Decision points (such as if statements)
Loops (such as for and while)
The tool then calculates the Cyclomatic Complexity of the code. The Cyclomatic Complexity score provides a numerical value indicating the number of independent paths through the code, giving developers insights into the complexity and maintainability of their codebase.

Cyclomatic Complexity Formula:
Cyclomatic Complexity (M) is calculated using the formula:

𝑀 = 𝐸 − 𝑁 + 2𝑃
Where:

M = Cyclomatic Complexity
E = Number of edges in the control flow graph (representing paths, loops, and conditionals)
N = Number of nodes (representing functions)
P = Number of connected components (usually 1 in most programs)
Installation:
To use the Code Complexity Analyzer, follow these steps:

Clone the Repository:

bash
Copy
git clone https://github.com/yourusername/CodeComplexityAnalyzer.git
Navigate to the Project Directory:

bash
Copy
cd CodeComplexityAnalyzer
Build the Project (assuming you’re using Visual Studio or a similar IDE):

Open the project in your IDE and build the solution.
Run the Analyzer:

Ensure you have a valid C/C++ source code file to analyze (e.g., test_file.cpp).
Execute the program, providing the file you want to analyze as input.
bash
Copy
./a.exe test_file.cpp
How to Use:
Prepare a C/C++ source file (e.g., example.cpp) to analyze.
Run the analyzer using the executable built from the project.
Review the output, which will include:
Detected functions.
Detected control flow structures (such as if, for, while).
The Cyclomatic Complexity score for the codebase.
