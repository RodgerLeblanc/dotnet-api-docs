         // Requests an IDesignerHost service from the design time environment using Component.Site.GetService()
         IDesignerHost^ dh = static_cast<IDesignerHost^>(this->Component->Site->GetService( IDesignerHost::typeid ));