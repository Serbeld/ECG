clc
close all
clear all

s = serial('COM3','BaudRate',9600);
fopen(s);
fprintf(s,'*IDN?');
i = 1;
while true
    x(i) = str2double(fscanf(s));
    i = i + 1;
    plot(x)
    pause(0.1)
end