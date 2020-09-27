import ev3dev.ev3 as ev3
import time
ev3.Sound.beep()

    # Potential values of the color_sensor.color property
    # 0: No color
    # 1: Black
    # 2: Blue
    # 3: Green
    # 4: Yellow
    # 5: Red
    # 6: White
    # 7: Brown
    # From http://python-ev3dev.readthedocs.io/en/latest/sensors.html#special-sensor-classes
    
rightmotor = ev3.LargeMotor('outC')
leftmotor = ev3.LargeMotor('outB')
sp = 250
flag = sp * 0.2
visit_green = False
color_sensor = ev3.ColorSensor()
while (True):
    try:
        r_sp = sp
        l_sp = sp
        if(color_sensor.color == 1):
            r_sp += flag
            l_sp -= flag
            pass
        elif(color_sensor.color == 5):
            rightmotor.stop()
            leftmotor.stop()
            break
        elif(color_sensor.color == 3):
            if( not visit_green):
                rightmotor.stop()
                leftmotor.stop()
                time.sleep(3)
                ev3.Sound.beep()
                visit_green = True
                continue
        else :
            r_sp -= flag
            l_sp += flag
        rightmotor.run_to_rel_pos(position_sp = 20, speed_sp = r_sp)
        leftmotor.run_to_rel_pos(position_sp = 20, speed_sp = l_sp)
        color_sensor = ev3.ColorSensor()
    except :
        rightmotor.stop()
        leftmotor.stop()
        break

ev3.Sound.beep()