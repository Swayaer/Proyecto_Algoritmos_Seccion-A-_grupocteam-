#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <windows.h>// Necesario para Sleep()
#include <algorithm> //usamos esta libreria para las variables en lugar de mostrar numeros negativos siempre muestre 0 en su lagar usando la funciom max
using namespace std;
void mensaje_de_bienvenida() {
    cout << R"(
  ____  _                           _     _
 | __ )(_) ___ _ ____   _____ _ __ (_) __| | ___
 |  _ \| |/ _ \ '_ \ \ / / _ \ '_ \| |/ _` |/ _ \
 | |_) | |  __/ | | \ V /  __/ | | | | (_| | (_) |
 |____/|_|\___|_| |_|\_/ \___|_| |_|_|\__,_|\___/
        _..._
      .'     '.      _
     /    .-""-\   _/ \
   .-|   /:.   |  |   |
   |  \  |:.   /.-'-./
   | .-'-;:__.'    =/
   .'=  *=|NASA _.='
  /   _.  |    ;
 ;-.-'|    \   |
/   | \    _\  _\
\__/'._;.  ==' ==\
         \    \   |
         /    /   /
         /-._/-._/
         \   `\  \
          `-._/._/
 )" << endl; //usar R"()" me ayudo a mantener saltos de linea y espaciados se le llama cadena multilinea
    cout << "Hola nuevo capintan ingresa tu nombre" << endl;
};
void mostrarmenu() {
    cout << "========================================" << endl;
    cout << "1.Explorar un planeta cercano" << endl;
    cout << "2.Reparar la nave" << endl;
    cout << "3.Enviar senales" << endl;
    cout << "4.Rendirse" << endl;
    cout << "========================================" << endl;
    cout << "Seleccione una opcion:";
}
void cat_loading() {
    cout << R"(
   /)_/)
  (,,>.<)
  / >   >   | |    ___   __ _  __| (_)_ __   __ _
            | |   / _ \ / _` |/ _` | | '_ \ / _` |
            | |__| (_) | (_| | (_| | | | | | (_| |
            |_____\___/ \__,_|\__,_|_|_| |_|\__, |
                                             |___/
)";
}
void nave() {
    // pequeña y basica ilustracion de una nave motivos esteticos
    cout << R"(
su nave capitan

           ._,.
         "..-..pf.
        -L   ..#'
      .+_L  ."]#
      ,'j' .+.j`                 -'.__..,.,p.
     _~ #..<..0.                 .J-.``..._f.
    .7..#_.. _f.                .....-..,`4'
    ;` ,#j.  T'      ..         ..J....,'.j`
   .` .."^.,-0.,,,,yMMMMM,.    ,-.J...+`.j@
  .'.`...' .yMMMMM0M@^=`""g.. .'..J..".'.jH
  j' .'1`  q'^)@@#"^".`"='BNg_...,]_)'...0-
 .T ...I. j"    .'..+,_.'3#MMM0MggCBf....F.
 j/.+'.{..+       `^~'-^~~""""'"""?'"``'1`
 .... .y.}                  `.._-:`_...jf
 g-.  .Lg'                 ..,..'-....,'.
.'.   .Y^                  .....',].._f
......-f.                 .-,,.,.-:--&`
                          .`...'..`_J`
                          .~......'#'
                          '..,,.,_]`
                          .L..`..``.
------------------------------------------------

    )" << endl;
};
void nave_danada2() {

    // pequeña y basica ilustracion de una nave motivos esteticos
    cout << R"(

capitan tu nave se daño por aterrizaje forzado

           ._,.

      .+_L  ."]#
      ,'j' .+.j`                 -'.__..,.,p.
     _~ #..<..0.                 .J-.``..._f.
    .7..#_.. _f.                .....-..,`4'
    ;` ,#j.  T'      ..
   .` .."^.,-0.,,,,yMMM   .    ,-.J...+`.j@
  .'.`...' .yMMMMM0M@^=`""g.. .'..J..".'.jH
  j' .'1`  q'^)   "^".`"='BNg_...,]_)'...0-
 .T ...I. j"    .'..+,_.'3#MMM0MggCBf....F.
                             `.._-:`_...jf
 g-.  .Lg'                 ..,..'-....,'.
.'.   .Y^                  .....',].._f
......-f.                 .-,,.,.-:--&`
                          .`...'..`_J`


------------------------------------------------
    )" << endl;
};
void nave_danada() {
    // pequeña y basica ilustracion de una nave motivos esteticos esta se muestra cuando la daño sufre algun daño en evento nocturno o evento y es un indicador para repararla
    cout << R"(
capitan tu nave esta en estado critico

          ._,.

      .+_L  ."]#
      ,'j' .+.j`                 -'.__..,.,p.
     _~ #..<..0.                 .J-.``..._f.
    .7..#_.. _f.                .....-..,`4'
    ;` ,#j.  T'      ..
   .` .."^.,-0.,,,,yMMM   .    ,-.J...+`.j@
  .'.`...' .yMMMMM0M@^=`""g.. .'..J..".'.jH
  j' .'1`  q'^)   "^".`"='BNg_...,]_)'...0-
 .T ...I. j"    .'..+,_.'3#MMM0MggCBf....F.
                             `.._-:`_...jf
 g-.  .Lg'                 ..,..'-....,'.
.'.   .Y^                  .....',].._f
......-f.                 .-,,.,.-:--&`
                          .`...'..`_J`


------------------------------------------------

    )" << endl;
};
void nave2() {
    // pequeña y basica ilustracion de una nave motivos esteticos
    cout << R"(
su nave capitan esta al 100%

            ._,.
         "..-..pf.
        -L   ..#'
      .+_L  ."]#
      ,'j' .+.j`                 -'.__..,.,p.
     _~ #..<..0.                 .J-.``..._f.
    .7..#_.. _f.                .....-..,`4'
    ;` ,#j.  T'      ..         ..J....,'.j`
   .` .."^.,-0.,,,,yMMMMM,.    ,-.J...+`.j@
  .'.`...' .yMMMMM0M@^=`""g.. .'..J..".'.jH
  j' .'1`  q'^)@@#"^".`"='BNg_...,]_)'...0-
 .T ...I. j"    .'..+,_.'3#MMM0MggCBf....F.
 j/.+'.{..+       `^~'-^~~""""'"""?'"``'1`
 .... .y.}                  `.._-:`_...jf
 g-.  .Lg'                 ..,..'-....,'.
.'.   .Y^                  .....',].._f
......-f.                 .-,,.,.-:--&`
                          .`...'..`_J`
                          .~......'#'
                          '..,,.,_]`
                          .L..`..``.
------------------------------------------------
    )" << endl;
};
void explorarPlaneta() {
    cout << R"(
 /)_/)
(,,>.<)    ________________________________
/ >   >   | Has explorado un nuevo planeta  |
           ---------------------------------
                 *       +
           '                  |
       ()    .-.,="``"=.    - o -
             '=/_       \     |
          *   |  '=._    |
               \     `=./`,        '
            .   '=.__.=' `='      *
   +                         +
        O      *        '       .

)";
}
void senales() {
    cout << R"(                                 .
     .              .   .'.     \   /
   \   /      .'. .' '.'   '  -=  o  =-
 -=  o  =-  .'   '              / | \
   / | \                          |
     |                            |
     |                            |
     |                      .=====|
     |=====.                |.---.|
     |.---.|                ||=o=||
     ||=o=||                ||   ||
     ||   ||                ||   ||
     ||   ||                ||___||
     ||___||                |[:::]|
     |[:::]|                '-----'
     '-----'
    "establecioendo comunicaciones......")";
    Sleep(2000);
    cout << R"(
   /)_/)
  (,,>.<)
  / >   >   | |    ___   __ _  __| (_)_ __   __ _
            | |   / _ \ / _` |/ _` | | '_ \ / _` |
            | |__| (_) | (_| | (_| | | | | | (_| |
            |_____\___/ \__,_|\__,_|_|_| |_|\__, |
                                             |___/
)";
    Sleep(2000);
}
void piratas() {
    cout << R"(
               \ /                                          \   /
              --o--           `\\             //'      .____-/.\-____.
                                \\           //             ~`-'~
                                 \\. __-__ .//
                       ___/-_.-.__`/~     ~\'__.-._-\___
.|.       ___________.'__/__ ~-[ \.\'-----'/./ ]-~ __\__`.___________       .|.
~o~~~~~~~--------______-~~~~~-_/_/ |   .   | \_\_-~~~~~-______--------~~~~~~~o~
' `               + + +  (X)(X)  ~--\__ __/--~  (X)(X)  + + +               ' `
                             (X) `/.\' ~ `/.\' (X)
                                 "\_/"   "\_/"
      Piratas espaciales asaltan la nave, -15% de integridad, -20 suministros
)";
}
void encuentroPocoAmistoso() {
    cout << R"(

                            ,-.
       ___,---.__          /'|`\          __,---,___
    ,-'    \`    `-.____,-'  |  `-.____,-'    //    `-.
  ,'        |           ~'\     /`~           |        `.
 /      ___//              `. ,'          ,  , \___      \
|    ,-'   `-.__   _         |        ,    __,-'   `-.    |
|   /          /\_  `   .    |    ,      _/\          \   |
\  |           \ \`-.___ \   |   / ___,-'/ /           |  /
 \  \           | `._   `\\  |  //'   _,' |           /  /
  `-.\         /'  _ `---'' , . ``---' _  `\         /,-'
     ``       /     \    ,='/ \`=.    /     \       ''
             |__   /|\_,--.,-.--,--._/|\   __|
             /  `./  \\`\ |  |  | /,//' \,'  \
            /   /     ||--+--|--+-/-|     \   \
           |   |     /'\_\_\ | /_/_/`\     |   |
            \   \__, \_     `~'     _/ .__/   /
             `-._,-'   `-._______,-'   `-._,-'
)" << endl;
}
void loser() {
    cout << R"(
    ____                        ___
  / ___| __ _ _ __ ___   ___   / _ \__   _____ _ __
 | |  _ / _` | '_ ` _ \ / _ \ | | | \ \ / / _ \ '__|
 | |_| | (_| | | | | | |  __/ | |_| |\ V /  __/ |
  \____|\__,_|_| |_| |_|\___|  \___/  \_/ \___|_|
              el exito no es para todos
                      credits
                 created by cteam++
           Art by https://www.asciiart.eu/
 text ASCII by https://www.creativefabrica.com/es/tools/ascii-art-generator/
       :\     /;               _
      ;  \___/  ;             ; ;
     ,:-"'   `"-:.            / ;
_   /,---.   ,---.\   _     _; /
_:>((  |  ) (  |  ))<:_ ,-""_,"
    \`````   `````/""""",-""
     '-.._ v _..-'      )
       / ___   ____,..  \
      / /   | |   | ( \. \
ctr  / /    | |    | |  \ \
     `"     `"     `"    `"
------------------------------------------------

)" << endl;
}
void loser1() {
    cout << R"(
   ____                        ___
  / ___| __ _ _ __ ___   ___   / _ \__   _____ _ __
 | |  _ / _` | '_ ` _ \ / _ \ | | | \ \ / / _ \ '__|
 | |_| | (_| | | | | | |  __/ | |_| |\ V /  __/ |
  \____|\__,_|_| |_| |_|\___|  \___/  \_/ \___|_|

                 created by cteam++
           Art by https://www.asciiart.eu/
 text ASCII by https://www.creativefabrica.com/es/tools/ascii-art-generator/
       :\     /;               _
      ;  \___/  ;             ; ;
     ,:-"'   `"-:.            / ;
_   /,---.   ,---.\   _     _; /
_:>((  |  ) (  |  ))<:_ ,-""_,"
    \`````   `````/""""",-""
     '-.._ v _..-'      )
       / ___   ____,..  \
      / /   | |   | ( \. \
ctr  / /    | |    | |  \ \
     `"     `"     `"    `"
------------------------------------------------

)" << endl;

}
void encuentroamistoso() {
    cout << R"(
           .-""""-.       .-""""-.
          /        \     /        \
         /_        _\   /_        _\
        // \      / \\ // \      / \\
        |\__\    /__/| |\__\    /__/|
         \    ||    /   \    ||    /
          \        /     \        /
           \  __  /       \  __  /
   .-""""-. '.__.'.-""""-. '.__.'.-""""-.
  /        \ |  |/        \ |  |/        \
 /_        _\|  /_        _\|  /_        _\
// \      / \\ // \      / \\ // \      / \\
|\__\    /__/| |\__\    /__/| |\__\    /__/|
 \    ||    /   \    ||    /   \    ||    /
  \        /     \        /     \        /
   \  __  /       \  __  /       \  __  /
    '.__.'         '.__.'         '.__.'
     |  |           |  |           |  |
     |  |           |  |           |  |

         Encuentro amistoso completado
               combustible obtenido
)";
}
void noche() {

    cout << R"(
"Hora de descansar capitan has hecho todo por hoy (>_<) "
.              +   .                .   . .     .  .
                   .                    .       .     *
  .       *                        . . . .  .   .  + .
            "You Are Here"            .   .  +  . . .
.                 |             .  .   .    .    . .
                  |           .     .     . +.    +  .
                 \|/            .       .   . .
        . .       V          .    * . . .  .  +   .
           +      .           .   .      +
                            .       . +  .+. .
  .                      .     . + .  . .     .      .
           .      .    .     . .   . . .        ! /
      *             .    . .  +    .  .       - O -
          .     .    .  +   . .  *  .       . / |
               . + .  .  .  .. +  .
.      .  .  .  *   .  *  . +..  .            *
 .      .   . .   .   .   . .  +   .    .            +
)" << endl;
}
void rain_cosmic() {
    cout << R"(
 "encontraste una tormenta cosmica- 10 de  oxigeno"
        ------               _____
       /      \ ___\     ___/    ___
    --/-  ___  /    \/  /  /    /   \
   /     /           \__     //_     \
  /                     \   / ___     |
  |           ___       \/+--/        /
   \__           \       \           /
      \__                 |          /
    \     /____      /  /       |   /
      _____/         ___       \/  /\
           \__      /      /    |    |
         /    \____/   \       /   //
     // / / // / /\    /-_-/\//-__-
      /  /  // /   \__// / / /  //
     //   / /   //   /  // / // /
      /// // / /   /  //  / //
   //   //       //  /  // / /
     / / / / /     /  /    /
  ///  / / /  //  // /  // //
     ///    /    /    / / / /
///  /    // / /  // / / /  /
   // ///   /      /// / /
)" << endl;
}
void meteoros() {

    cout << R"(
su nave capitan


 .       .     .         .         .        .
                                         .         .        *        .        .           .
        .          \       +       \        .        .
                                             +         .       \        .        \        .       *
         .         .     *        .        .        .
                                                       .          .       \        .       \       .        +
                                                            .        \        *       \        .          .
  *         .         .       .        .        .         .
           ._,.
         "..-..pf.
        -L   ..#'
      .+_L  ."]#
      ,'j' .+.j`                 -'.__..,.,p. .       *          .          .       +
     _~ #..<..0.                 .J-.``..._f.    ;` ,#j.  T'      ..         ..J....,'.j`
    .7..#_.. _f.                .....-..,`4'    ;` ,#j.  T'      ..         ..J....,'.j`
    ;` ,#j.  T'      ..         ..J....,'.j`
   .` .."^.,-0.,,,,yMMMMM,.    ,-.J...+`.j@
  .'.`...' .yMMMMM0M@^=`""g.. .'..J..".'.jH    ;` ,#j.  T'      ..         ..J....,'.j`
  j' .'1`  q'^)@@#"^".`"='BNg_...,]_)'...0-
 .T ...I. j"    .'..+,_.'3#MMM0MggCBf....F.
 j/.+'.{..+       `^~'-^~~""""'"""?'"``'1`
 .... .y.}                  `.._-:`_...jf    ;` ,#j.  T'      ..         ..J....,'.j`
 g-.  .Lg'                 ..,..'-....,'.
.'.   .Y^                  .....',].._f
......-f.                 .-,,.,.-:--&`    ;` ,#j.  T'      ..         ..J....,'.j`
                          .`...'..`_J`
                          .~......'#'
                          '..,,.,_]`    ;` ,#j.  T'      ..         ..J....,'.j`
                          .L..`..``.                    .       *          .          .       +

        .       \        .       \        +        .
   .                                               .        *        .        *        .        .
        .          \       .        \       +        .
  +           .        .        .       .        .
        *         .                                                       \       .       *        .
   .         .        .       \        .                         \       +
         .        +        .                                         *        .        .
     .        \         .        \         .        .
  .         *        .        .        *        .        .
                                                             .        .         +        .        .         .
   *          .        \        .        \        .

------------------------------------------------

    )" << endl;

};
void congratulations() {
    cout << R"(
   ____                            _         _       _   _
  / ___|___  _ __   __ _ _ __ __ _| |_ _   _| | __ _| |_(_) ___  _ __  ___
 | |   / _ \| '_ \ / _` | '__/ _` | __| | | | |/ _` | __| |/ _ \| '_ \/ __|
 | |__| (_) | | | | (_| | | | (_| | |_| |_| | | (_| | |_| | (_) | | | \__ \
  \____\___/|_| |_|\__, |_|  \__,_|\__|\__,_|_|\__,_|\__|_|\___/|_| |_|___/
                   |___/
              Has terminado el juego
                 created by cteam++
                 Art by https://www.asciiart.eu/
       :\     /;               _
      ;  \___/  ;             ; ;
     ,:-"'   `"-:.            / ;
_   /,---.   ,---.\   _     _; /
_:>((  |  ) (  |  ))<:_ ,-""_,"
    \`````   `````/""""",-""
     '-.._ v _..-'      )
       / ___   ____,..  \
      / /   | |   | ( \. \
ctr  / /    | |    | |  \ \
     `"     `"     `"    `"
------------------------------------------------

)" << endl;
}
int main() {
    // declaramos las variables a utilizar dentro del programa, algunas de estas iran cambaindo su valor conforme avanze el algoritmo
    string nombre_del_capitan;//usamos una cadena de caracteres para ingresar el nombre del usuario esto nos facilita si llegase usar numeros o caracteres
    int combustible = 30;
    int oxigeno = 50;
    int suministros = 40;
    int integridad_nave = 100;
    int decision;
    //las anteriores variables tanto como combustible, oxigeno, suministros y intregridad estaran sujetas a cambios
    int dia = 1;//inicialisamos el while en 1 para que termine justo en 10 dias
    int opcion;// variable a utilizar para nuestro stwich que recibira por teclado una de las 4 opciones del usuario
    char reparar_nave;// aca usamos char por que es para la validacion por medio de un if de S || s para reparar la nave
    int unidades;//esta variable es la que usamos para recibir por medio de teclado cuanto es el porcentaje de reparacion de la nave
    char opcion_rendirse;// aca usamos char por que es para la validacion por medio de un if de S || s para rendirse
    bool rendirse = true;// usamos esta variable inicializada en true para la condicion de rendirse
    bool entrada_valida = false;// se inicializa para que el bucle tenga en cuneta que desde el comienzo esta mal ya luego se cambia true para avanzar
    srand(time(0)); // semilla aleatoria para que funcione rand suando % para delimitar el rango
    mensaje_de_bienvenida();
    cin >> nombre_del_capitan;//entrada de datos por parte del usuario para colocar su nombre
    //muestro los stats base del capitan
    cout << "Capitan " << nombre_del_capitan << " sus estadisticas base son:" << endl;//muestra el nombre antes ingresado
    cout << "oxigeno------" << oxigeno << endl;
    cout << "suministros------" << suministros << endl;
    cout << "integridad de su nave------" << integridad_nave << endl;
    cout << "combustible------" << combustible << endl;
    cout << "Comienzo del viaje" << endl;
    //uso un while para complir con la condicion de los 10 dias validando que siempore se cumpla las condiciones ya que en dado caso una no se cumpla esto detendra elbucle
    while (dia <= 10 && oxigeno > 0 && combustible > 0 && integridad_nave > 0 && rendirse) {
        if (integridad_nave < 100) {
            nave_danada();
        }
        else {
            nave();
        }// este if es la parte de la nave que se muestra solo cuando la nave sufra algun daño en su integridad
        Sleep(1000);
        cout << "==============================" << endl;//contador de dias en el que va el jugador
        cout << "      DIA " << dia << endl;
        cout << "==============================" << endl;
        cout << "Nota: solo puedes realizar una mision diaria" << endl;
        cout << "----------------------------------------" << endl;
        cout << " Capitan " << nombre_del_capitan << "cual sera su primera mision del dia" << endl;
        cout << "----------------------------------------" << endl;
        mostrarmenu();//llama a al void para desplegar el menu y amntener mas limpio el main
        //cin>>opcion;// pedimos que ingrese el numero de una opcion para dar paso al switch y comenzar las acciones en el juego
        cin >> opcion;
        switch (opcion) {
        case 1: {
            cout << "has comsmido -15 de combustible " << endl;
            combustible -= 15;
            //--------------------------oxigeno---------------------------------------------------//
            if ((rand() % 100) < 60) {
                int encontrado = rand() % 20 + 20; // 20 a 40
                oxigeno += encontrado;
                // oxigeno = oxigeno + encontrado lo de arriba es una forma de abreviarlo;
                cout << R"(
                 /)_/)
                (,,>.<)  <(En hora buena encontraste oxigeno)
                / >   >
                            )" << "+ " << encontrado << endl;
            }
            else {
                cout << R"(
                /)_/)
               (,,>.<)  <(no hemos encontrado nada de oxigeno (>_<))
               / >   >)" << endl;
            };
            Sleep(2000);
            //-------------------------------combustible-------------------------------------------------
            if ((rand() % 100) < 25) {
                int encontradocombustible = rand() % 10 + 20;
                combustible += encontradocombustible;
                cout << R"(
                 /)_/)
                (,,>.<)  <(En hora buena encontraste combustible)
                / >   >
                            )" << "+ " << encontradocombustible << endl;
            }
            else {
                cout << R"(
                /)_/)
               (,,>.<)  <(no hemos encontrado nada de combustible  (>_<))
               / >   >)" << endl;

            };

            Sleep(2000);
            //-------------------suministros------------------------------------------------------------

            if ((rand() % 100) < 50) {
                int suministros_encontrados = rand() % 70 + 30;
                suministros += suministros_encontrados;
                cout << R"(
                 /)_/)
                (,,>.<)  <(En hora buena suministros)
                / >   >
                            )" << "+ " << suministros_encontrados << endl;
            }
            else {
                cout << R"(
                /)_/)
               (,,>.<)  <(no encontramos suministros  (>_<))
               / >   >)" << endl;

            };
            Sleep(2000);
            //----------------------tormenta electrica---------------------------------------------------

            if ((rand() % 100) < 25) {
                int danos_nave2 = rand() % 11 + 9;
                integridad_nave -= danos_nave2;
                cout << R"(
                 /)_/)
                (,,>.<)  Nos encontramos una tormenta electrica capitan
                / >   >
                            )" << "- " << danos_nave2 << " de integridad en tu nave" << endl;
            }
            Sleep(2000);
            //--------------------------------aterrizajeforzado--------------
            if ((rand() % 100) < 25) {
                int danos_nave = rand() % 11 + 9;
                integridad_nave -= danos_nave;
                cout << R"(
                 /)_/)
                (,,>.<)  Aterrizaje forzado
                / >   >
                            )" << "- " << danos_nave << " unidades de integridad en tu nave" << endl;
            }
        }
              Sleep(2000);
              break;
        case 2: {
            if (integridad_nave == 100) {
                nave2();
            }
            else {
                nave_danada();

                cout << "Desea repararla S" << endl;
                cin >> reparar_nave;
                if (reparar_nave == 'S' || reparar_nave == 's') {

                    cout << "cuales el porcentaje a reparar de la nave" << endl;
                    cin >> unidades;
                    suministros -= unidades * 10;
                    integridad_nave += unidades * 10;
                }
            }
            if (integridad_nave > 100) {
                integridad_nave = 100;
            }
        }
              break;
        case 3:
            senales();
            if ((rand() % 100) < 50) {
                int encuentro = rand() % 31 + 70;
                combustible += 60;
                encuentroamistoso();
                Sleep(2000);
            }
            else {
                piratas();
                suministros -= 20;
                integridad_nave -= 15;
            };
            Sleep(2000);
            break;
        case 4://este caso es  la opcin de rendirse usando un if para validar la accion y usando un valor verdadero o falso para que salda del ciclo while
            cout << "presiona s para rendirte" << endl;
            cin >> opcion_rendirse;
            if (opcion_rendirse == 'S' || opcion_rendirse == 's') {
                rendirse = false;
                loser();
                return 0;// detiene instantaniamnte el programa evitando que tambien salga la parte de congratulations
            }
            break;

        default:
            cout << "Opcion no valida, intente de nuevo." << endl;
        };
        if (oxigeno > 0 && combustible > 0 && integridad_nave > 0) {
            noche();

            // condicion de consumo diario y eventos nocturnos
            if ((rand() % 100) < 15) {
                int nocturno = rand() % 4;
                if (nocturno == 0) {
                    rain_cosmic();
                    oxigeno -= 10;
                }
                if (nocturno == 1) {
                    cout << "encuentro amistoso +20 de combustible" << endl;
                    encuentroamistoso();
                    combustible += 20;
                }
                if (nocturno == 2) {
                    cout << "Daño a la integridad de tu nave - 10%" << endl;
                    encuentroPocoAmistoso();
                    integridad_nave -= 10;
                }
                if (nocturno == 3){
                    meteoros();
                    cout << "desea recibir el impacto presione 1 o si desea maniobrar precione 2 " << endl;
                    cin >> decision;
                    if (decision == 1) {
                        int combustibleperdido = rand() % 11 + 20;
                        combustible -= combustibleperdido;
                        cout << "combustible perdido" << combustibleperdido;
                    }
                    else {
                        int impacto = rand() % 16 + 10;
                        integridad_nave -= impacto;
                        cout << "dano de impacto  " << impacto;
                    }
                }
            }
        }
        oxigeno -= 20;
        suministros -= 30;
        Sleep(2000);
        combustible = max(0, combustible);//max(0, combustible) esta  devuelve el mayor valor entre 0 y combustible lo colocamos aca para que se ejecute cada dioa antes de mostrar el resultado
        oxigeno = max(0, oxigeno);
        suministros = max(0, suministros);
        integridad_nave = max(0, integridad_nave);
        cout << "=== ESTADO ACTUAL ===" << endl;
        cout << "Oxigeno: " << oxigeno << endl;
        cout << "Suministros: " << suministros << endl;
        cout << "Combustible: " << combustible << endl;
        cout << "Integridad: " << integridad_nave << "%" << endl;
        cout << "///////////////////////////////////" << endl;
        Sleep(2000);
        dia++;

        //validaciones de las condiciones para terminar el juego
        if (combustible <= 0) {
            combustible = 0;
            cout << "te quedaste sin combustible mas suerte para la proxima " << endl;
            loser1();
            return 0;
        }
        if (oxigeno <= 0) {
            oxigeno = 0;
            cout << "te quedaste sin oxigeno mas suerte para la proxima " << endl;
            loser1();
            return 0;
        }
        if (integridad_nave <= 0) {
            integridad_nave = 0;
            cout << "Tu nave ha sido destruida  " << endl;
            loser1();
            return 0;
        }
    };
    return 0;
}