// DUSK's TypeScript Testing Environment

interface Developer {
    name: string;
    level: number;
    languages: string[];
    active: boolean;
}

const dusk: Developer = {
    name: "DUSK",
    level: 90,
    languages: ["TypeScript", "JavaScript", "C++", "Python"],
    active: true
};

console.log("╔═════════════════════════════╗");
console.log(`║  ${dusk.name}'s TS Workspace    ║`);
console.log("╚═════════════════════════════╝\n");

console.log(`Status: ${dusk.active ? "Online" : "Offline"}`);
console.log(`Level: ${dusk.level}%\n`);

console.log("Languages mastered:");
dusk.languages.forEach((lang: string, i: number) => {
    console.log(`  ${i + 1}. ${lang}`);
});

function checkStatus(dev: Developer): string{
    return dev.active 
        ? `${dev.name} is ready to code.`
        : `${dev.name} is offline.`;
}

console.log(`\n${checkStatus(dusk)}`);
console.log("✓ TypeScript compiled successfully.\n");