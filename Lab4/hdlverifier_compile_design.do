# Create design library
vlib work
vmap altera_mf C:/EELE466/JG/Lab4/altera_mf
# Create and open project
project new . compile_project
project open compile_project
# Add source files to project
project addfile "C:/EELE466/JG/Lab4/lzc.vhd"
project addfile "C:/EELE466/JG/Lab4/newtons.vhd"
project addfile "C:/EELE466/JG/Lab4/rom.vhd"
project addfile "C:/EELE466/JG/Lab4/rsr.vhd"
project addfile "C:/EELE466/JG/Lab4/y0.vhd"
# Calculate compilation order
project calculateorder
set compcmd [project compileall -n]
# Close project
project close
# Compile all files and report error
if [catch {eval $compcmd}] {
    exit -code 1
}
