import os
import re
import sys

def find_and_rename_main_functions(directory, file):
    # Regex to match `int main()` or `void main()` in C++ files
    main_pattern = re.compile(r'\b(?:int|void)\s+main\s*\(\s*\)')

    for root, _, files in os.walk(directory):
        for file in files:
            if file.endswith('.cpp') or file.endswith('.h'):  # Handle C++ source and header files
                file_path = os.path.join(root, file)

                with open(file_path, 'r') as f:
                    content = f.read()

                # If the file has a `main()` function and is not the current file
                if file_path != file and main_pattern.search(content):
                    file_name_without_ext = os.path.splitext(file)[0]
                    new_main_name = f"main_{file_name_without_ext}("
                    updated_content = main_pattern.sub(rf'{new_main_name}', content)

                    with open(file_path, 'w') as f:
                        f.write(updated_content)
                    print(f"Renamed main() in {file_path} to main_{file_name_without_ext}()")

if __name__ == '__main__':
    current_file = sys.argv[1]
    project_directory = sys.argv[2]
    find_and_rename_main_functions(project_directory, current_file)
