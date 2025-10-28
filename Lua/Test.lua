local coder = "DUSK"
local mission = "Master the craft"

print("┌─────────────────────────┐")
print("│  " .. coder .. "'s Lua Terminal   │")
print("└─────────────────────────┘\n")

local tools = {"Scripting", "Automation", "Game Logic"}

print("Mission: " .. mission)
print("\nTools ready:")

for i, tool in ipairs(tools) do
    print("  [" .. i .. "] " .. tool)
end

print("\n✓ Lua environment active.")
print("Execute orders, " .. coder .. ".")