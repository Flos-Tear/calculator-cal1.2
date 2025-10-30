const display = document.getElementById("display");

function appendToDisplay(input) {
  // จัดการกับฟังก์ชันพิเศษ
  if (input === 'C') {
    clearDisplay();
    return;
  }
  
  if (input === '±') {
    toggleSign();
    return;
  }
  
  if (input === '%') {
    calculatePercentage();
    return;
  }
  
  // แสดงผลตัวเลขและตัวดำเนินการ
  display.value += input;
}

function clearDisplay() {
  display.value = "";
}

function toggleSign() {
  if (display.value !== "" && display.value !== "Error") {
    if (display.value.charAt(0) === '-') {
      display.value = display.value.substring(1);
    } else {
      display.value = '-' + display.value;
    }
  }
}

function calculatePercentage() {
  if (display.value !== "" && display.value !== "Error") {
    try {
      display.value = eval(display.value) / 100;
    } catch (error) {
      display.value = "Error";
    }
  }
}

function calculate() {
  try {
    // แทนที่สัญลักษณ์เพื่อให้ eval ทำงานได้
    let expression = display.value
      .replace(/×/g, '*')
      .replace(/÷/g, '/')
      .replace(/−/g, '-');
    
    display.value = eval(expression);
  } 
  catch (error) {
    display.value = "Error";
  }
}
