#include <gtkmm.h>
#include "Agent.h"

class AgentWindow : public Gtk::Window {
public:
    AgentWindow() {
        set_title("Agente GUI");
        set_default_size(300, 200);

        
        agentButton.set_label("Agente");
        agentButton.signal_clicked().connect(sigc::mem_fun(*this, &AgentWindow::on_agent_button_clicked));

        
        add(agentButton);
        show_all_children();
    }

    virtual ~AgentWindow() {}

protected:
 
    void on_agent_button_clicked() {
        std::cout << "Botão do Agente clicado!" << std::endl;
        
    }

    Gtk::Button agentButton;
};

int main(int argc, char* argv[]) {
    auto app = Gtk::Application::create(argc, argv, "org.gtkmm.example");

    AgentWindow agentWindow;

    
    return app->run(agentWindow);
}
