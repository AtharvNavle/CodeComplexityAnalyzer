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

