@echo off
echo --- CPU Assembler ---
:loop
set /p arg=Enter program filename (or type exit to quit): 

if /i "%arg%"=="exit" goto end

python assembler.py "%arg%"
python memorymaker.py "%arg%".RAM "%arg%".mem
echo.
goto loop

:end
echo Done.
pause