using System;

class Program 
{
    static void Main() 
    {
        string coder = "DUSK";
        int version = 4;
        
        Console.WriteLine("╔════════════════════════╗");
        Console.WriteLine($"║  {coder}'s C# Lab v{version}.0  ║");
        Console.WriteLine("╔════════════════════════╗\n");
        
        string[] skills = { "Logic", "Speed", "Focus" };
        
        foreach(var skill in skills) 
        {
            Console.WriteLine($"→ {skill} module loaded");
        }
        
        Console.WriteLine($"\n✓ System operational. Welcome, {coder}.");
    }
}