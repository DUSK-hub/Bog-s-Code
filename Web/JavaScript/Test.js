// DUSK's JavaScript Testing Ground

const coder = "DUSK";
const skills = ["Frontend", "Backend", "Automation"];
const level = 85;

console.log("╔═══════════════════════════╗");
console.log(`║  ${coder}'s JS Environment  ║`);
console.log("╚═══════════════════════════╝\n");

console.log(`Skill Level: ${level}%`);
console.log("\nCapabilities loaded:");

skills.forEach((skill, index) => {
    console.log(`  ${index + 1}. ${skill}`);
});

function motivate(name) {
    return `Keep pushing, ${name}. The code is your canvas.`;
}

console.log(`\n${motivate(coder)}`);
console.log("✓ JavaScript engine running.\n");

// Quick functionality test
const calculate = (a, b) => a + b;
console.log(`Test calculation: 7 + 13 = ${calculate(7, 13)}`);