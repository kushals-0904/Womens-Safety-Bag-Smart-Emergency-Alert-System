% Women’s Safety Bag – Emergency Alert Logic Simulation

panic = input('Press 1 to simulate Emergency, 0 to stay Safe: ');

if panic == 1
    disp('⚠️ Emergency Detected!');
    disp('Fetching GPS coordinates...');
    latitude = 12.9716;
    longitude = 77.5946;
    fprintf('Location: %.4f , %.4f\n', latitude, longitude);
    disp('Sending SMS alert to emergency contacts...');
else
    disp('System is in Safe Mode.');
end
