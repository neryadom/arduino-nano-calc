### INFIX NOTATION CALCULATOR

---
OPERANDS
```bash
Natural numbers # (including 0?) <- yes, as we are in the realm of computers (jk)
```

---
OPERATORS:
```bash
*    # multiplication
-    # minus
+    # plus
/    # division by
=    # concludes the expression
```


Example: You are the human and want to calculate 5 * 3.
1. Press button 1 five times to declare first operand
2. Press button 2 (represents "next")
3. Press button 1 one time to select operator
4. Press button 2 for next
5. Press button 1 three times for second operand
6. Press button 2 to conclude input

General structure of buttons:
Button 1: Inputs for entering operands and specifying numbers

---
STACK
```bash
char data[size_t]    # defined as char array to allow placing operands AND operators on it.
int top              # top of stack.
```

