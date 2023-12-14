L(M) = {w | w es in identificador que inicia con una letra l, seguida de cualquier número de caracteres alfanuméricos}

![[Pasted image 20230201114029.png]]

```java
import javax.swing.*;  
  
public class Main {  
    public static void main(String[] args) {  
  
        String inpt = JOptionPane.showInputDialog(null, "Var name to validate:");  
        int count=0;  
        int state=0;  
        JOptionPane.showMessageDialog(null, "Length: " + inpt.length());  
  
  
        while (count < inpt.length()) {  
            if ((inpt.charAt(count) >= 65 && inpt.charAt(count) <= 90) || (inpt.charAt(count) >= 97 && inpt.charAt(count) <= 122)) {  
                if (state == 0) {  
                    state = 1;  
                }  
            } else if (inpt.charAt(count) >= 48 && inpt.charAt(count) <= 57) {  
                if (state == 0) {  
                    state = 2;  
                    break;                }  
            } else {  
                state=2;  
                break;            }  
            count++;  
        }  
        if (state == 1){  
            JOptionPane.showMessageDialog(null, "Variable valida");  
        }  
        else{  
            JOptionPane.showMessageDialog(null, "Variable no valida");  
        }  
    }  
}
```
