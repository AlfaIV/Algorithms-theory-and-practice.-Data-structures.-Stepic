cd /home/runner/C-plus-plus-Stepic/Algorithms.Data_Structure
gcc main.c input/input.c stack/stack.c -o output
# gcc input/input.c stack/stack.c -o output
if [ $? -eq 0 ]; then
  echo OK
  chmod +x output
  ./output
  # AddressSanitizer
  # valgrind ./output
else
  echo FAIL
fi
