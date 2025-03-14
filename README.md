# **Code Complexity Analyzer**

## **Overview**
The **Code Complexity Analyzer** is a C++ tool designed for statically analyzing C/C++ source code to detect key structural elements and compute **Cyclomatic Complexity**—a metric that measures the complexity of a program's control flow. This tool helps developers, software engineers, and teams assess the maintainability, testability, and overall complexity of their codebase.

The analyzer scans C/C++ source files, identifies key components such as functions, control flow structures (`if`, `for`, `while`), and computes the Cyclomatic Complexity to give insights into the complexity and quality of the code.

## **Features**
- **Cyclomatic Complexity Calculation:**
  - Calculates Cyclomatic Complexity, which represents the number of independent paths through a program’s control flow graph.
  - The tool computes complexity based on the number of nodes, edges, and connected components in the control flow graph.

- **Static Code Analysis:**
  - Detects and lists functions in the source code.
  - Identifies control structures like `if` statements, `for` loops, and `while` loops.
  
- **Code Metrics Report:**
  - Outputs a detailed report displaying:
    - Detected functions and their signatures.
    - Control flow structures (`if`, `for`, `while`).
    - Cyclomatic Complexity score for the analyzed code.

## **Key Components**
- **Code Parsing:**
  - The tool parses C/C++ source code files to identify functions, loops, and control flow structures.
  - Uses regular expressions and custom parsing logic to detect the presence of functions and loops.

- **Cyclomatic Complexity Formula:**
  - Cyclomatic Complexity is calculated using the formula:
  
    \[
    M = E - N + 2P
    \]

    Where:
    - **M** = Cyclomatic Complexity
    - **E** = Number of edges (representing paths, loops, and conditionals)
    - **N** = Number of nodes (representing functions)
    - **P** = Number of connected components (usually 1 in most programs)

- **Control Flow Detection:**
  - Identifies and classifies control flow structures (`if`, `for`, `while`) in the code to aid in complexity calculation.

## **Usage**

### 1. **Clone the Repository:**

   Clone the project repository to your local machine:
   ```bash
   git clone https://github.com/yourusername/CodeComplexityAnalyzer.git
