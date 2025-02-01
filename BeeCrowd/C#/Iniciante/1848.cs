using System; 

class URI {

    static void Main(string[] args) { 

        int number, flag;
        string crow;
        
        for (int i = 0; i < 3; i++)
        {
            number = 0;
            flag = 0;
            
            while (flag == 0)
            {
                crow = Console.ReadLine();
                
                switch (crow)
                {
                    case "--*": 
                        number += 1; 
                        break;
                    case "-*-": 
                        number += 2; 
                        break;
                    case "-**": 
                        number += 3; 
                        break;
                    case "*--": 
                        number += 4; 
                        break;
                    case "*-*": 
                        number += 5; 
                        break;
                    case "**-": 
                        number += 6; 
                        break;
                    case "***": 
                        number += 7; 
                        break;
                    default: flag = 1; break;
                }
            }
            
            Console.WriteLine(number);
        }

    }

}