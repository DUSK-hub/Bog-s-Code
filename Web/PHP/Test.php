<?php
// DUSK's PHP Testing Script

$developer = "DUSK";
$project = "Backend Systems";
$version = 2.5;

echo "╔════════════════════════════╗\n";
echo "║  $developer's PHP Lab       ║\n";
echo "╚════════════════════════════╝\n\n";

echo "Project: $project\n";
echo "Version: $version\n\n";

$stack = ["MySQL", "API Design", "Authentication"];

echo "Stack components:\n";
foreach($stack as $index => $component) {
    echo "  → $component\n";
}

function greet($name) {
    return "✓ PHP initialized. Ready to build, $name.";
}

echo "\n" . greet($developer) . "\n";

// Quick functionality test
$sum = 15 + 27;
echo "\nTest calculation: 15 + 27 = $sum\n";
?>