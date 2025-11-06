using System;
					
public class Program
{
	public static void Main()
	{
		int idade1, idade2;
		string nome1, nome2;
		Console.WriteLine("Digite o nome da primeira pessoa: ");
		nome1 = Console.ReadLine();
		Console.WriteLine("Digite a idade da primeira pessoa: ");
		idade1 = int.Parse(Console.ReadLine());
		Console.WriteLine("Digite o nome da segunda pessoa: ");
		nome2 = Console.ReadLine();
		Console.WriteLine("Digite a idade da segunda pessoa: ");
		idade2 = int.Parse(Console.ReadLine());
		Console.WriteLine("A primeira pessoa e: "+nome1+" e tem "+idade1+" anos");
		Console.WriteLine("A segunda pessoa e: "+nome2+" e tem "+idade2+" anos");
	}
}
