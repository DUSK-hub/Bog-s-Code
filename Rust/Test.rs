fn main() {
    let name = "DUSK";
    let motto = "Code with purpose";
    let languages = vec!["Rust", "C++", "Python"];
    
    println!("╭─────────────────────────╮");
    println!("│  {} Build System     │", name);
    println!("╰─────────────────────────╯\n");
    
    println!("Motto: {}", motto);
    println!("\nLanguages mastered:");
    
    for (i, lang) in languages.iter().enumerate() {
        println!("  {}. {}", i + 1, lang);
    }
    
    println!("\n✓ Rust environment validated.");
    println!("Ready to build, {}.", name);
}