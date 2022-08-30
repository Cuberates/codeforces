@echo off
setlocal ENABLEDELAYEDEXPANSION
set s=0
for %%i in (%*) do (
set /A j=%%i/100
start http://uva.onlinejudge.org/external/!j!/%%i.html
set s=1
)
if !s!==1 goto end

echo Give 0 to end.
echo.
:again
set /P x=UVA Problem No.:
if !x! EQU 0 goto end
if !x! LSS 100 (
echo Bad Parameter
goto again
)
if !x! GEQ 1000 (
if !x! LSS 10000 (
echo Bad Parameter
goto again
)
)
set /A y=!x!/100
start http://uva.onlinejudge.org/external/!y!/!x!.html
goto again
:end

